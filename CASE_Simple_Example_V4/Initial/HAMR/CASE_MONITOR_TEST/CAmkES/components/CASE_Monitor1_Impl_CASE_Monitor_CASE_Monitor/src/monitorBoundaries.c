//monitorBoundaries.c
#include <math.h>
#include <stdbool.h>
#include <stdarg.h>
#include <stdio.h>
#include "monitorBoundaries.h"

// cSpell:ignore debugf vcalc dcalc

// ********** helper/debug functions *************

/// <summary>Calls printf if DEBUGF is true.</summary>
/// <param name="format"> is passed directly into printf</param>
void debugf(const char* format, ...)
{
    if (DEBUGF)
    {
        va_list argptr;
        va_start (argptr, format);
        vprintf(format, argptr);
        //printf(format);
        va_end(argptr);
    }
}

///<summary>Prints all the boundary values if DEBUGF is enabled</summary>
///<param name="b">Boundary_s struct that contains the calculated boundary values</param>
///<returns>NA</returns>
void printBoundaryRecord(struct Boundary_s b)
{
    debugf("---------------\n");
    debugf(" vCalcHorz Lower Boundary: %f\n", b.vCalcHorzLowBound);
    debugf(" vCalcHorz Upper Boundary: %f\n", b.vCalcHorzHighBound);
    debugf(" betaCalc Lower Boundary : %f\n", b.betaCalcLowBound);
    debugf(" betaCalc Upper Boundary : %f\n", b.betaCalcHighBound);
    debugf(" vCalcVert Lower Boundary: %f\n", b.vCalcVertLowBound);
    debugf(" vCalcVert Upper Boundary: %f\n", b.vCalcVertHighBound);
    debugf("\n");

    return;
}

// ********** private functions ******************

/// <summary>Converts degrees parameter to radians and returns value</summary>
/// <param name="degrees">Degrees value as double<param>
/// <returns>A radian value converted from the degrees param.</returns>
double degreesToRadians(double degrees)
{
    double rads = 0.0;
    rads = degrees * DEG2RAD;
    return rads;
}

///<summary>Calculate the +/- offset for betaCalc
///This also determines the minimum denominator in the equation.
///This prevents a divide-by-zero error.
///</summary>
///<param name ="dCalc"> Previously calculated dCalc variable in NM/s.</param>
///<returns>
///Offset value in degrees to be added or subtracted to
///betaCalc to get the lower or upper boundaryRec.
///</returns>
double calculateBetaCalcBoundaryOffset(double dCalc)
{
    /* Equation:
        (HALF_G_TAN_ROLL_ANGLE / max(dCalc_ftPerSec + DCALC_DENOM_OFFSET, MIN_DENOM) + ORIENTATION_REF_ERROR);
        where max is the greater of the two values.  This also prevents divide-by-zero
        Note: as of 4/25/2021, the equations in "DAPRA CASE Phase 3 Monitor HAC Logic.pdf" have not been updated
              with the DCALC_DENOM_OFFSET nor the using MIN_DENOM as the lowest possible denominator.
    */

    // lowest return value
    static const double MIN_DENOM =  8.872;
    // value from equation spec to be added to dcalc in ft/sec
    static const double DCALC_DENOM_OFFSET = 9.0;

    //return value
    double offset = 0.0;

    //dCalc is in NM/s  We can convert this value to ft/sec for Vertical speeds.
    double dCalc_ftPerSec = NM_TO_FT * dCalc;

    // denominator in offset equation;
    double denom = dCalc_ftPerSec - DCALC_DENOM_OFFSET;

    // use the max of denom or MIN_DENOM
    if (denom < MIN_DENOM)
    {
        denom = MIN_DENOM;
    }

    // calculate the offset from the equation spec
    offset = (HALF_G_TAN_ROLL_ANGLE / denom + ORIENTATION_REF_ERROR);

    return offset;
}


// ********** public functions ******************

// --------- intermediate functions -------------

/// <summary> Returns DCalc, an intermediate value in other formala. Units: Feet</summary>
/// <params> Location in Radians: lat1/lon1 are the previous position; lat2/lon2 are the current position</params>
/// <remarks>
/// This is the bulk of the work for the vCalcHorz boundary calculations.
/// </remarks>
/// <returns>dCalc value in feet.</returns>
double calculateDCalcNmPerSec(double latRad1, double latRad2, double lonRad1, double lonRad2)
{
    /* = EARTH_RADIUS_NM * SqrRoot(cos(lat2)^2 * (lon2 - lon1)^2 + (lat2 - lat1)^2)
    // = EARTH_RADIUS_NM * SqrRoot(arg2_1 * arg2_2 * arg_2_3)
    // = EARTH_RADIUS_NM * SqrRoot(squareRootArgs)
    // = EARTH_RADIUS_NM * squareRootValue
    // = DCalcNmPerSec
    */

    debugf("=EARTH_RADIUS_NM * SqrRoot( cos(%f)^2 * (%f - %f)^2 + (%f - %f)^2 )\n", latRad2, lonRad2, lonRad1, latRad2, latRad1);

    debugf("=%f * SqrRoot( cos(%f)^2 * (%f - %f)^2 + (%f - %f)^2 )\n", EARTH_RADIUS_NM, latRad2, lonRad2, lonRad1, latRad2, latRad1);

    double arg2_1 = pow(cos(latRad2), 2);
    double arg2_2 = pow((lonRad2 - lonRad1), 2);
    double arg2_3 = pow((latRad2 - latRad1), 2);
    // debugf("arg2s: %e %e %e\n", arg2_1, arg2_2, arg2_3);

    debugf("=%f * SqrRoot( %e * %e + %e )\n", EARTH_RADIUS_NM, arg2_1, arg2_2, arg2_3);

    double squareRootArgs = (arg2_1 * arg2_2 + arg2_3);
    // debugf("Square root args = %e\n", squareRootArgs);

    debugf("=%f * SqrRoot( %e )\n", EARTH_RADIUS_NM, squareRootArgs);

    double squareRootValue = sqrt(squareRootArgs);

    debugf("=%f * %e\n", EARTH_RADIUS_NM, squareRootValue);

    double dCalc_NmPerSec = EARTH_RADIUS_NM * squareRootValue;
    debugf("=dCalc_NmPerSec = %f\n", dCalc_NmPerSec);

    return dCalc_NmPerSec;
} //end calculateDCalcNmPerSec

///<summary>Calculates VCalcHorz (Kts)  from VCalc (Nm/s)
///<param name="dCalc_NmPerSec"> DCalc value in Nm/s.</param>
///<returns>VCalcHorz as double in Kts</returns>
double calculateVCalcHorzFromDCalc(double dCalc_NmPerSec)
{
    double vCalcHorzKts = 0.0;

    //Convert to Kts
    vCalcHorzKts = dCalc_NmPerSec * NM_PER_SEC_TO_KTS;

    debugf("vCalcHorz_kts = %f\n", vCalcHorzKts);

    return vCalcHorzKts;
}

///<summary>Checks the betaCalc equation for DIVIDE-BY-ZERO.
///Should be called before calling calculateBetaCalc </summary>
///<params> Location in Radians:lat1/lon1 are the previous position; lat2/lon2 are the current position</params>
///<returns> boolean indicating if there was a divide-by-zero (DIVIDE-BY-ZERO == true)</returns>
bool checkBetaCalcForDivideByZero(double lat1, double lat2, double lon1, double lon2)
{
    // Equation for betaCalc denominator:
    //(lat2 - lat1) + BETA_CALC_DENOM_COEFF * (lon2 - lon1)^2

    bool divideByZero = false;

    double denom = (lat2 - lat1) + BETA_CALC_DENOM_COEFF * pow((lon2 - lon1), 2.0);

    if (fabs(denom) < DIV_BY_ZERO_THRESHOLD)
    {
        divideByZero = true;
        debugf("Found DIV-BY-ZERO with lat1=%f, lat 2=%F, lon1=%f, lon2=%f\n", lat1, lat2, lon1, lon2);
    }

    return divideByZero;
}


/// <summary> Returns betaCalc, the calculated angle before threshold boundaries. Units: Degrees</summary>
/// !PRE: denominator has been checked to ensure there is no divide-by-zero.
/// <params> Location in Radians:lat1/lon1 are the previous position; lat2/lon2 are the current position</params>
/// <remarks>
/// This is the bulk of the work for the betaCalc Lower and Upper boundary calculations.
/// Note the equations has a conditional: +180 if latRad1 > latRad2
/// </remarks>
/// <returns>dCalc value in feet.</returns>
double calculatebetaCalc(double lat1, double lat2, double lon1, double lon2)
{
    //betaCalc = ATAN( ( (1.214795 - 0.642788 * lat2) * (lon2 - lon1)  )
    //                            /
    //                 ( (lat2 - lat1) + DENOM_COEFF  * (lon2 - lon1)^2)
    //               )
    //         * (180/PI) + (180 if lat1 > lat2)
    //
    //         = ATAN( ( (numer1_arg1)                *  (numer1_arg2) )
    //                            /
    //                 (  denom1_arg1  + DENOM_COEFF * (denom1_arg2)^2))
    //         * DEG2RAD +?180
    //
    //         = ATAN( numerator / denominator ) * DEG2RAD +?180
    //
    //         Where +?180 is only applied if lat1 > lat2

    static const double NUMER_COEFF1 = 1.214795;
    static const double NUMER_COEFF2 = 0.642788;

    bool divideByZero = false; //placeholder
    double betaCalc = 0.0;
    double oneEightyOffset = 0.0;

    double denom1_arg1 = (lat2 - lat1);
    double denom1_arg2 = (lon2 - lon1);

    // only do real calculation is there will not be a divide-by-zero
    if (!divideByZero)
    {

        // if if lat1 > lat2, change offset to +180.0
        if (lat1 > lat2)
        {
            oneEightyOffset = 180.0;
        }

        betaCalc = atan( ( (NUMER_COEFF1 - NUMER_COEFF2 * lat2) * (lon2 - lon1) )
                        /
                        (denom1_arg1 + BETA_CALC_DENOM_COEFF * pow((denom1_arg2), 2.0) )
                    )
                * RAD2DEG + oneEightyOffset;

    } //end NOT divide-by-zero

    debugf("betaCalc = %f\n", betaCalc);

    return betaCalc;
}



// --------- boundary functions -----------------

///<summary>Calculates VCalc Horizontal Lower Boundary</summary>
///<param name="vCalcHorz"> DCalc as double in Kts</param>
///<returns>VCalcHorz Lower Boundary as double in Kts</returns>
double calculateVCalcHorzLowBound(double vCalcHorz)
{
    double vCalcHorzBound = 0.0;

    vCalcHorzBound = vCalcHorz - VCALC_BOUNDARY_THRESHOLD;

    return vCalcHorzBound;
}

///<summary>Calculates VCalc Horizontal Upper Boundary</summary>
///<param name="vCalcHorz">DCalc as double in Kts</param>
///<returns>VCalcHorz Upper Boundary as double in Kts</returns>
double calculateVCalcHorzHighBound(double vCalcHorz)
{
    double vCalcHorzBound = 0.0;

    vCalcHorzBound = vCalcHorz + VCALC_BOUNDARY_THRESHOLD;

    return vCalcHorzBound;
}


///<summary>Calculates betaCalc Lower Boundary</summary>
///<param name="betaCalc"> betaCalc as double in degrees</param>
///<param name ="dCalc"> Previously calculated dCalc variable in NM/s.</param>
///<returns>betaCalc Lower Boundary as double in degrees</returns>
double calculateBetaCalcLowBound(double betaCalc, double dCalc)
{
    double betaCalcBound = 0.0;
    double offset = 0.0;

    offset = calculateBetaCalcBoundaryOffset(dCalc);

    betaCalcBound = betaCalc - offset;

    debugf("betaCalc Lower Bound:%f\n", betaCalcBound);

    return betaCalcBound;
}

///<summary>Calculates betaCalc Upper Boundary</summary>
///<param name="betaCalc"> betaCalc as double in degrees</param>
///<param name ="dCalc"> Previously calculated dCalc variable in NM/s.
///<returns>betaCalc Upper Boundary as double in degrees</returns>
double calculateBetaCalcHighBound(double betaCalc, double dCalc)
{
    double betaCalcBound = 0.0;
    double offset = 0.0;

    offset = calculateBetaCalcBoundaryOffset(dCalc);

    betaCalcBound = betaCalc + offset;

    debugf("betaCalc Upper Bound:%f\n", betaCalcBound);

    return betaCalcBound;
}

///<summary>Calculates VCalcVert Lower Boundary</summary>
///<param name="height1"> Height of A/C at last cycle</param>
///<param name="height1"> Height of A/C at current cycle</param>
///<returns>VCalcVert Lower Boundary as double in ft/min</returns>
double calculateVCalcVertLowBound(double height1, double height2)
{
    double vCalcVertBound = 0.0;

    vCalcVertBound = (height2 - height1) * 60. - 840.0;

    debugf("vCalcVertBound Lower Bound:%f\n", vCalcVertBound);

    return vCalcVertBound;
}

///<summary>Calculates VCalcVert Upper Boundary</summary>
///<param name="height1"> Height of A/C at last cycle</param>
///<param name="height1"> Height of A/C at current cycle</param>
///<returns>VCalcVert Upper Boundary as double in ft/min</returns>
double calculateVCalcVertHighBound(double height1, double height2)
{
    double vCalcVertBound = 0.0;

    vCalcVertBound = (height2 - height1) * 60. + 840.0;

    debugf("vCalcVertBound Upper Bound:%f\n", vCalcVertBound);

    return vCalcVertBound;
}

///<summary> One Interface to Rule Them All.
///This calculates all lower and uppper boundaries for one data set.
///All intermediate and common values are calculated internally.
///</summary>
///<param name="lat1">previous latitude in degrees</param>
///<param name="lat2">current latitude in degrees</param>
///<param name="lon1">previous longitude in degrees</param>
///<param name="lon2">current longitude in degrees</param>
///<param name="height1">previous height in feet</param>
///<param name="height2">current height in feet</param>
///<returns>Record (struct) containing all boundaries.  See Boundary_s</returns>
Boundary_s calculateBoundaries(double lat1, double lat2,
                               double lon1, double lon2,
                               double height1, double height2)
{
    //return struct
    Boundary_s boundaryRec;

    //intermediate values during calculations
    double dCalc_NmPerSec = 0.0;
    bool divideByZero = false;
    double betaCalc = 0.0;
    double vCalcHorz_kts = 0.0;


    //convert degrees to radians:
    double latRad1 = degreesToRadians(lat1);
    double latRad2 = degreesToRadians(lat2);
    double lonRad1 = degreesToRadians(lon1);
    double lonRad2 = degreesToRadians(lon2);

    //get DCalc (Nm per second), which can be used as a base for the Horz velocity and angle boundaries.
    dCalc_NmPerSec = calculateDCalcNmPerSec(latRad1, latRad2, lonRad1, lonRad2);

    // check to ensure betaCalc won't cause DIV-BY-ZERO.
    divideByZero = checkBetaCalcForDivideByZero(latRad1, latRad2, lonRad1, lonRad2);

    // if DIV-BY-ZERO, then use pre-determined values.
    if (divideByZero)
    {
        boundaryRec.betaCalcLowBound = BETA_CALC_DIV_BY_ZERO_LOW_DEFAULT;
        boundaryRec.betaCalcHighBound = BETA_CALC_DIV_BY_ZERO_HI_DEFAULT;
    }
    else //use normal calculations
    {
        betaCalc = calculatebetaCalc(latRad1, latRad2, lonRad1, lonRad2);

        //calculate lower and upper boundaries for betaCalc
        boundaryRec.betaCalcLowBound = calculateBetaCalcLowBound(betaCalc, dCalc_NmPerSec);
        boundaryRec.betaCalcHighBound = calculateBetaCalcHighBound(betaCalc, dCalc_NmPerSec);

    } //end-if DIV-BY-ZERO

    //convert to Kts
    vCalcHorz_kts = calculateVCalcHorzFromDCalc(dCalc_NmPerSec);

    //calculate boundaries for vCalcHorz
    boundaryRec.vCalcHorzLowBound = calculateVCalcHorzLowBound(vCalcHorz_kts);
    boundaryRec.vCalcHorzHighBound = calculateVCalcHorzHighBound(vCalcHorz_kts);

    //calculate boundaries for vCalcVert
    boundaryRec.vCalcVertLowBound = calculateVCalcVertLowBound(height1, height2);
    boundaryRec.vCalcVertHighBound = calculateVCalcVertHighBound(height1, height2);

    //debug
    debugf("Boundary Record:\n");
    printBoundaryRecord(boundaryRec);

    return boundaryRec;
}
