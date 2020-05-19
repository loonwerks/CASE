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
**Bottom Left:** 45.310450, -121.021332
**Center:** 45.322869, -120.963645
**Top Right:** 45.335257, -120.905920

[HamsterMap.com](http://www.hamstermap.com/) to plot the coordinates for visual verification

** Keep Out Zone

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
      UByte("altitudeType")
    )))
  ))
```