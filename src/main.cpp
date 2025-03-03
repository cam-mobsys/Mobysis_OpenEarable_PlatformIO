#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>
#include "OpenEarable.h"

// Set DEBUG to true in order to enable debug print
#define DEBUG true

// Change name to OELeft or OERight before flashing ("OpenEarable" if left as default value)
String d_name = "OpenEarable";
bool MASTER = true;

void setup()
{
#if DEBUG
  Serial.begin(115200);
  delay(5000);
  open_earable.debug(Serial);
  delay(5000);
#endif

    open_earable.begin(d_name, MASTER);
}

void loop()
{
  // Update and then sleep
    open_earable.update();
}