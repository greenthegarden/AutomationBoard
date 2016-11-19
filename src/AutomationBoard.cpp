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
