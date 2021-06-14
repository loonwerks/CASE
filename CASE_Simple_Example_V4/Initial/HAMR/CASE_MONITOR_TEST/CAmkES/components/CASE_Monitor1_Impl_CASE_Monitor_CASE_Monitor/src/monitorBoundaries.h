//monitorBoundaries.h
#ifndef MONITOR_BOUNDARIES
#define MONITOR_BOUNDARIES

// cSpell:ignore debugf vcalc
//Turns on/off debug output
#define DEBUGF 0

#define EARTH_RADIUS_NM 3443.918
#define DEG2RAD (M_PI / 180.0)
#define RAD2DEG (180.0 / M_PI)
#define NM_PER_SEC_TO_KTS pow(60.0, 2.0)
#define NM_TO_FT 1852.0 * (1.0 / 0.3048)
#define VCALC_BOUNDARY_THRESHOLD 5.33
#define ORIENTATION_REF_ERROR 31.0
#define HALF_G_TAN_ROLL_ANGLE 1597.0
#define BETA_CALC_DENOM_COEFF 0.246202

#define DIV_BY_ZERO_THRESHOLD 0.0000000000000000001
//                              1234567890123456789
#define DIVIDE_BY_0_INDICATOR 0.0
#define BETA_CALC_DIV_BY_ZERO_LOW_DEFAULT -180.0
#define BETA_CALC_DIV_BY_ZERO_HI_DEFAULT 180.0

/* note:
    phi = latitude
    lambda = longitude
    h = height
*/

/* --- types & structs --- */

typedef struct Boundary_s
{
    double vCalcHorzLowBound;
    double vCalcHorzHighBound;
    double betaCalcLowBound;
    double betaCalcHighBound;
    double vCalcVertLowBound;
    double vCalcVertHighBound;
} Boundary_s;

/* *** *** *** *** *** *** *** *** *** *** *** *** *** *** *** ***
 * REFERENCE THE .C FILE FOR FUNCTION COMMENTS AND USAGE   *** ***
 * *** *** *** *** *** *** *** *** *** *** *** *** *** *** *** ***/

// ********** --- struct "methods" **************
void printBoundaryRecord(struct Boundary_s b);

// ********** helper/debug functions ************
void debugf(const char* format, ...);

// ********** intermediate functions ************

double degreesToRadians(double degrees);

double calculateDCalcNmPerSec(double latRad1, double latRad2, double lonRad1, double lonRad2);
double calculateVCalcHorzFromDCalc(double dCalc_NmPerSec);
bool checkBetaCalcForDivideByZero(double lat1, double lat2, double lon1, double lon2);
double calculatebetaCalc(double lat1, double lat2, double lon1, double lon2);


// ********** boundary functions ****************

double calculateVCalcHorzLowBound(double vCalcHorz);
double calculateVCalcHorzHighBound(double vCalcHorz);

double calculateBetaCalcLowBound(double betaCalc, double dCalc);
double calculateBetaCalcHighBound(double betaCalc, double dCalc);

double calculateVCalcVertLowBound(double height1, double height2);
double calculateVCalcVertHighBound(double height1, double height2);

// ******** One interface to rule them all *******
Boundary_s calculateBoundaries(double lat1, double lat2,
                               double lon1, double lon2,
                               double height1, double height2);

#endif
