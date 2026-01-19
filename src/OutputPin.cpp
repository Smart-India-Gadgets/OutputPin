#include "OutputPin.h"

OutputPin::OutputPin()
{
  // Default constructor does nothing
  this->_pin = BTN_UNDEFINED_PIN;
}

OutputPin::OutputPin(uint8_t pin)
{
  this->OutputPin(pin, false);
}

OutputPin::OutputPin(uint8_t pin, bool activeLow)
{
  this->begin(pin, activeLow);
}

void OutputPin::begin(uint8_t pin)
{
  this->begin(pin, false);
}

void OutputPin::begin(uint8_t pin, bool activeLow)
{
  pinMode(pin, OUTPUT);
  this->_pin = pin;
  this->_activeLow = activeLow;
  this->_toggled = false;
}

void OutputPin::on()
{
  if (this->_pin == BTN_UNDEFINED_PIN)
  {
    return;
  }
  digitalWrite(this->_pin, this->_activeLow ? LOW : HIGH);
}

void OutputPin::off()
{
  if (this->_pin == BTN_UNDEFINED_PIN)
  {
    return;
  }
  digitalWrite(this->_pin, this->_activeLow ? HIGH : LOW);
}

void OutputPin::toggle()
{
  if (this->_toggled)
  {
    this->off();
    this->_toggled = false;
  }
  else
  {
    this->on();
    this->_toggled = true;
  }
}

void OutputPin::blink()
{
  blink(1);
}

void OutputPin::blink(uint8_t count)
{
  blink(count, 100);
}

void OutputPin::blink(uint8_t count, uint16_t duration)
{
  for (uint8_t c = 0; c < count; c++)
  {
    this->on();
    delay(duration);
    this->off();
    delay(duration);
  }
}
