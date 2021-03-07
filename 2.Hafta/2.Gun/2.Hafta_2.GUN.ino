#define BLYNK_PRINT DebugSerial
#include <SoftwareSerial.h>
#include <BlynkSimpleStream.h>

SoftwareSerial DebugSerial(2, 3); // RX, TX

char auth[] = "yVbomrdt5jHtrWyOiS3jqQi0-MyvVW7O";


void setup()
{
  DebugSerial.begin(9600);

  Serial.begin(9600);
  Blynk.begin(Serial, auth);
}

void loop()
{
  Blynk.run();
}
