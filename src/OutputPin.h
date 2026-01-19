#ifndef OutputPin_h
#define OutputPin_h

#include "Arduino.h"

const unsigned int BTN_UNDEFINED_PIN = 255;

class OutputPin
{
public:
  OutputPin();
  OutputPin(uint8_t pin);
  OutputPin(uint8_t pin, bool activeLow);
  void begin(uint8_t pin);
  void begin(uint8_t pin, bool activeLow);
  void on();
  void off();
  void toggle();
  void blink();
  void blink(uint8_t count);
  void blink(uint8_t count, uint16_t duration);

private:
  uint8_t _pin;
  bool _activeLow;
  bool _toggled;
};

#endif
