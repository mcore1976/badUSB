# badUSB
This is BadUSB device example based on ARDUINO MICRO SS BETTLE. This is a clone of Arduino Leonardo based on ATMEGA32U4 chip looking similar to Arduino Digispark.

The scripts for ARDUINO MICRO SS BEETLE were ported from Digispark Poorman's Rubber Ducky : https://github.com/MTK911/Attiny85

You may port another scripts on your own, the required changes are :

- use different library 
#include <Keyboard.h>  
instead of " #include <DigiKeyboard.h> "

- use following function in the code
 - for single key presses
Keyboard.press(..);  
Keyboard.release(..);
Keyboard.releaseAll();
 instead of DigiKeyboard.sendKeyStroke(...);

- for sending key sequences
Keyboard.print(..)
 instead of 
DigiKeyboard.println(...)

- do not use 
DigiKeyboard.update();
DigiKeyboard.delay(...);
 use simple delay(..); instead
 
You can see this device in action in my video : https://www.youtube.com/watch?v=X2EN3GxAkhw


