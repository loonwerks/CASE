# Keep In Zone

Keep-in-zone Definition: [KeepInZone Initialization](https://github.com/loonwerks/case-ta6-experimental-platform-OpenUxAS/blob/develop-case-ta6-ph2-example01/examples/CASE-TA6-Challenge-Problems/ph2_02_WaterwaySearch/InitializationMessages/KeepInZone_334.xml)

The rectangle is given by a center point with a width and height. Computed bottom-left and top-right for Polygon.i using this tool: [https://www.fcc.gov/media/radio/find-terminal-coordinates](https://www.fcc.gov/media/radio/find-terminal-coordinates)

```xml
<KeepInZone Series="CMASI" Time="3.0e-15">
  <ZoneID>334</ZoneID>
  <MinAltitude>50</MinAltitude>
  <MinAltitudeType>AGL</MinAltitudeType>
  <MaxAltitude>5000</MaxAltitude>
  <MaxAltitudeType>MSL</MaxAltitudeType>
  <AffectedAircraft/>
  <StartTime>0</StartTime>
  <EndTime>0</EndTime>
  <Padding>0.0</Padding>
  <Label/>
  <Boundary>
    <Rectangle Series="CMASI">
      <CenterPoint>
        <Location3D Series="CMASI">
          <Altitude>1000</Altitude><AltitudeType>MSL</AltitudeType>
          <Latitude>45.322869</Latitude>
          <Longitude>-120.963645</Longitude>
        </Location3D>
      </CenterPoint>
      <Width>8000.0</Width>
      <Height>5000.0</Height>
      <Rotation>0.0</Rotation>
    </Rectangle>
  </Boundary>
</KeepInZone>
```

Computed the hypotenuse using pythagoreans theorem and basic trigonometry to get the azimuth. Moved to the bottom left corner, and then used the reverse azimuth to move twice the distance to the top-right corner (shown as latitude, longitude pairs)

**Altitude**: 1000
**Bottom Left:** 45.300394, -121.014809 
**Center:** 45.322869, -120.963645
**Top Right:** 45.345344, -120.912451

[HamsterMap.com](http://www.hamstermap.com/) to plot the coordinates for visual verification

Encoded value (see [bitcodec/src/polygon](bitcodec/src/polygon)): 
`[4046A6734F82F512C05E40F2A172ABEF447A0000000000014046AC343B70EF56C05E3A6598E10CF6447A000000000001]`

# Keep Out Zone

Keep-out-zone Definition: [KeepOutZone Initialization](https://github.com/loonwerks/case-ta6-experimental-platform-OpenUxAS/blob/develop-case-ta6-ph2-example01/examples/CASE-TA6-Challenge-Problems/ph2_02_WaterwaySearch/InitializationMessages/KeepInZone_334.xml)

```xml
<KeepOutZone Series="CMASI" Time="3.1e-15">
  <ZoneID>335</ZoneID>
  <MinAltitude>500</MinAltitude>
  <MinAltitudeType>AGL</MinAltitudeType>
  <MaxAltitude>5000</MaxAltitude>
  <MaxAltitudeType>MSL</MaxAltitudeType>
  <AffectedAircraft/>
  <StartTime>0</StartTime>
  <EndTime>0</EndTime>
  <Padding>0.0</Padding>
  <Label/>
  <Boundary>
    <Rectangle Series="CMASI">
      <CenterPoint>
        <Location3D Series="CMASI">
          <Altitude>1000</Altitude><AltitudeType>MSL</AltitudeType>           
          <Latitude>45.334407</Latitude>
          <Longitude>-120.936179</Longitude>
        </Location3D>
      </CenterPoint>
      <Width>300.0</Width>
      <Height>300.0</Height>
      <Rotation>0.0</Rotation>
    </Rectangle>
  </Boundary>
</KeepOutZone>
```

**Altitude:** 1000
**Bottom Left:** 45.333059, -120.938088
**Center:** 45.334407, -120.936179 
**Top Right:** 45.335756, -120.934244

# Contiguity and Bitcodec Type Definitions

**Contiguity**

```
val PhaseII_Polygon =
  {Latitude : Double
    Longitude : Double
    Altitude : Float
    AltitudeType : AltitudeType
    } [2]: contig
```

**Bitcodec**

```scala
val Polygon =
  Concat(name = "Polygon", elements = ISZ(
    FixedRepeat("bondaryPointList",
    2,
    Concat("Location3D", ISZ(
      Double("latitude"),
      Double("longitude"),
      Float("altitude"),
      UInt("altitudeType")
    )))
  ))
```

Encoded value (see [bitcodec/src/polygon](bitcodec/src/polygon)): 
`[4046AAA1AD6451B9C05E3C09A2403148447A0000000000014046AAFA0D77B7C8C05E3BCAA7589EFE447A000000000001]`

# Computed from Isaac's Java Script Pulled from UxAS code Computation

Keep-In Zone:

Bottom left: (45.30039972874535, -121.01472992576784)
Top right: (45.34531548097283, -120.91251955738149)

`[4046A6737F915822C05E40F155C95C81447A0000000000014046AC334C34CA58C05E3A66B86DFA7D447A000000000001]`

Keep-Out Zone:

Bottom left: (45.33305951104345, -120.93809578907548)
Top right: (45.3357544568948, -120.93426211970625)

`[4046AAA1B1ADC6D5C05E3C09C2EBA60C447A0000000000014046AAFA0085ECB9C05E3BCAF35881EB447A000000000001]`
