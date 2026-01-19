#ifndef OutputPin_h
#define OutputPin_h

#include "Arduino.h"

class OutputPin
{
public:
  OutputPin(uint8_t pin);
  void on();
  void off();
  void blink();
  void blink(uint8_t count);
  void blink(uint8_t count, uint16_t duration);
  void toggle();

private:
  uint8_t _pin;
  bool _toggled;
};

#endif
