#include "AutomationBoard.h"

AutomationBoard automationboard;

/*--------------------------------------------------------------------------------------
  setup()
  Called by the Arduino framework once, before the main loop begins
  --------------------------------------------------------------------------------------*/
void setup()
{
  Serial.begin(9600);

  automationboard.init();

  Serial.println(automationboard.getRelay1Pin());
  Serial.println(automationboard.getRelay2Pin());
  Serial.println(automationboard.getRelay3Pin());
  Serial.println(automationboard.getRelay4Pin());
}

/*--------------------------------------------------------------------------------------
  loop()
  Arduino main loop
  --------------------------------------------------------------------------------------*/
void loop()
{
}
