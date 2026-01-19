#include "OutputPin.h"

#define PIN_INDIC_LED 13

OutputPin led;

void setup() {
    led.begin(PIN_INDIC_LED);
    
    // your setup code here
}

void loop() {
    // your loop code here

    led.on();
    delay(1000);
    led.off();
    delay(1000);
}