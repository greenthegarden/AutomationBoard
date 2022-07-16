#ifndef AUTOMATIONBOARD_H_
#define AUTOMATIONBOARD_H_

// For details about the Automation Board see
// http://garagelab.com.br/automation/
//  Digital I/O Pins: D0~D8 Reserved / D9~D13 Free
// Analog Input Pins: A0 and A1 Reserved / A2~A5 Free

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

// pin definitions for the Automation Board

// Pin Function
// D0  Serial Communication (RX) / XBee DOUT
// D1  Serial Communication (TX) / XBee DIN
// D2  RS485 RO
// D3  RS485 DI
// D4  RS485 RE/DE
// D5  Relay 1
// D6  Relay 2
// D7  Relay 3
// D8  Relay 4
// D9, D10, D11, D12, D13 Available
// A0  Infrared in
// A1  Infrared out
// A2, A3, A4, A4 Available



const byte RelayPins[] = { RELAY_1, RELAY_2, RELAY_3, RELAY_4 };

//int PWM_PINS[4] = { 2, 4, 5, 8 };

class AutomationBoard
{
public:
  AutomationBoard();
private:
  const unsigned int RELAY_1_PIN = 5; // Relay 1 is connected to Arduino D5
  const unsigned int RELAY_2_PIN = 6; // Relay 2 is connected to Arduino D6
  const unsigned int RELAY_3_PIN = 7; // Relay 3 is connected to Arduino D7
  const unsigned int RELAY_4_PIN = 8; // Relay 4 is connected to Arduino D8

  const byte RelayPins[] = {RELAY_1, RELAY_2, RELAY_3, RELAY_4};

public:
  void init();
  byte getRelay1Pin();
  byte getRelay2Pin();
  byte getRelay3Pin();
  byte getRelay4Pin();
};


#endif  /* AUTOMATIONBOARD_H_ */
