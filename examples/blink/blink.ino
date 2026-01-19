#include "OutputPin.h"

#define PIN_INDIC_LED 13

OutputPin led(PIN_INDIC_LED);

void setup() {
    // your setup code here
}

void loop() {
    // your loop code here

    // Blink the LED
    led.blink();
    delay(1000);
    
    // Blink the LED 3 times
    led.blink(3);
    delay(1000);

    // Blink the LED very fastly 2 times
    led.blink(2, 50);
    delay(1000);
}