#include "OutputPin.h"

OutputPin::OutputPin(uint8_t pin)
{
  pinMode(pin, OUTPUT);
  this->_pin = pin;
  this->_toggled = false;
}

void OutputPin::on()
{
  digitalWrite(this->_pin, HIGH);
}

void OutputPin::off()
{
  digitalWrite(this->_pin, LOW);
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