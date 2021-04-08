#include "DigiKeyboard.h"

void setup() {}

void loop() {

  // CHROME OS VER 86 ENROLLMENT
  
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(5000);

  // CONNECT TO WIFI
  
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_S,MOD_ALT_LEFT|MOD_SHIFT_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(4000);
  DigiKeyboard.print("WIFISSID");
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(81);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(81);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("WIFIPASSWORD");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(10000);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(20000);
  
  // AGREE TERMS OF SERVICE
  
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(20000);
  
  // ENTERPRISE ENROLLMENT LOGIN
  
  DigiKeyboard.sendKeyStroke(KEY_E, MOD_ALT_LEFT|MOD_CONTROL_LEFT);
  DigiKeyboard.delay(10000);
  DigiKeyboard.print("ENROLLUSERNAME");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(10000);
  DigiKeyboard.print("ENROLLPASSWORD");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100000000);
}
