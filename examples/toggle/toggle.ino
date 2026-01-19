#include "OutputPin.h"

#define PIN_INDIC_LED 13

OutputPin led(PIN_INDIC_LED);

void setup() {
    // your setup code here
}

void loop() {
    // your loop code here

    led.toggle();
    delay(1000);
    led.toggle();
    delay(1000);
}
