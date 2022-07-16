#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif


#include "AutomationBoard.h"

AutomationBoard::AutomationBoard()
{}

void AutomationBoard::init() {
  for (byte i=0; i<sizeof(RelayPins); i++) {
    pinMode(RelayPins[i], OUTPUT);
  }
}

byte AutomationBoard::getRelay1Pin() {
  return RELAY_1_PIN;
}

byte AutomationBoard::getRelay2Pin()
{
  return RELAY_2_PIN;
}

byte AutomationBoard::getRelay3Pin()
{
  return RELAY_3_PIN;
}

byte AutomationBoard::getRelay4Pin()
{
  return RELAY_4_PIN;
}
