# badUSB
This is BadUSB device example based on ARDUINO MICRO SS BETTLE. This is a clone of Arduino Leonardo based on ATMEGA32U4 chip looking similar to Arduino Digispark. It may be 5V based or 3.3V based - it is not relevant in this case.

The scripts for ARDUINO MICRO SS BEETLE were ported from Digispark Poorman's Rubber Ducky : https://github.com/MTK911/Attiny85

You may port another scripts on your own, the required changes are :

- change the keyboard library - use  "#include <Keyboard.h>"  instead of using " #include <DigiKeyboard.h> "

use following functions in the code

- for single key presses use "Keyboard.press(..);" , "Keyboard.release(..);" , "Keyboard.releaseAll();"  instead of "DigiKeyboard.sendKeyStroke(...);"

- for sending key sequences use "Keyboard.print(..)"  instead of using "DigiKeyboard.println(...)"

- do not use "DigiKeyboard.update();" , 

- for delays instead of using "DigiKeyboard.delay(...);"  use simple "delay(..);" 


You can see this device in action in my video : https://www.youtube.com/watch?v=X2EN3GxAkhw


