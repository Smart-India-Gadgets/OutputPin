# OutputPin

A library for controlling output pins in embedded systems

### Setup

Just initialise the OutputPin with the target PIN

#### Option 1
```cpp
OutputPin led(PIN_LED);
// OR
OutputPin led(PIN_LED, true); // second parameter bool `activeLow`

void setup() {
    // your setup code here
}

void loop() {
    // your loop code here
}
```

#### Option 2
```cpp
OutputPin led;

void setup() {
    led.begin(PIN_LED);
    // OR
    led.begin(PIN_LED, true); // second parameter bool `activeLow`
}

void loop() {
    // your loop code here
}
```

### All Functions

```cpp
// Initialise the output pin
OutputPin led(PIN_LED, [true]);
// OR
led.begin(PIN_LED, [true]);

// Turn on the LED
led.on();

// Turn off the LED
led.off();

// Toggle the LED on and off after each call
led.toggle();

// Blink the LED 1 time with default 100ms gap
led.blink();

// Blink the LED 4 times with default 100ms gap
led.blink(4);

// Blink the LED 3 times with 50ms gap
led.blink(3, 50);
```


---

#### Design & Developed by

> Alauddin Ansari

