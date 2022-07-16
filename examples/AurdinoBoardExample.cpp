#include <AutomationBoard.h>

/*--------------------------------------------------------------------------------------
  setup()
  Called by the Arduino framework once, before the main loop begins
  --------------------------------------------------------------------------------------*/
void setup()
{
  Serial.begin(9600);

  AutomationBoard().init();

  Serial.println(AutomationBoard().getRelay1Pin());
  Serial.println(AutomationBoard().getRelay2Pin());
  Serial.println(AutomationBoard().getRelay3Pin());
  Serial.println(AutomationBoard().getRelay4Pin());
}

/*--------------------------------------------------------------------------------------
  loop()
  Arduino main loop
  --------------------------------------------------------------------------------------*/
void loop()
{
}