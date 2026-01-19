# OutputPin

A library for controlling output pins in embedded systems

### Setup

Just initialise the OutputPin with the target PIN

```cpp
OutputPin led(PIN_INDIC_LED);

void setup() {
    // your setup code here
}

void loop() {
    led.on();
    delay(1000);
    led.off();
    delay(1000);

    // your loop code here
}
```

### Functions

```cpp
// Initialise the output pin
OutputPin led(PIN_INDIC_LED);

// Turn on the LED
led.on();

// Turn off the LED
led.off();

// Toggle the LED on and off after each call
led.toggle();

// Blink the LED 2 times with default 100ms gap
led.blink();

// Blink the LED 4 times with default 100ms gap
led.blink(4);

// Blink the LED 3 times with 50ms gap
led.blink(3, 50);
```


---

#### Design & Developed by

> Alauddin Ansari

