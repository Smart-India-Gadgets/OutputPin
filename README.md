# OutputPin

A library for controlling output pins in embedded systems

### Setup

### Installation

1.  Open  [platformio.ini](https://docs.platformio.org/en/latest/projectconf/index.html), a project configuration file located in the root of PlatformIO project.
2.  Add the following line to the  [lib_deps](https://docs.platformio.org/en/latest/projectconf/sections/env/options/library/lib_deps.html)  option of  `[env:]`  section:
    
    ```cpp
    siglibs/OutputPin@^1.0.2
    ```
    
3.  Build a project, PlatformIO will automatically install dependencies.

### Include it

1.  Add the following line to your source code:
    
    ```cpp
    #include <OutputPin.h>
    ```
    
2.  Check  [Examples](https://registry.platformio.org/libraries/siglibs/OutputPin/examples)  on how to use the  **OutputPin**  library.

### Command Line Interface

1.  Open  [PlatformIO Core CLI](https://docs.platformio.org/en/latest/core/index.html)
2.  Change directory (`cd`) to the PlatformIO project where  [platformio.ini](https://docs.platformio.org/en/latest/projectconf/index.html)  is located.
3.  Copy the following  [pio pkg install](https://docs.platformio.org/en/latest/core/userguide/pkg/cmd_install.html)  command and paste into the CLI shell, press  Enter:
    
    ```cpp
    pio pkg install --library "siglibs/OutputPin@^1.0.2"
    ```


### Usage

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

