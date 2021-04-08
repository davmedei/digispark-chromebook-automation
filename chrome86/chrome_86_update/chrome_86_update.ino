#include "DigiKeyboard.h"

void setup() {}

void loop() {

  // CHROME OS VER 86 UPDATE
  
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(5000);
  
  // ACCOUNT LOGIN
  
  DigiKeyboard.print("ACCOUNTUSERNAME");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(10000);
  DigiKeyboard.print("ACCOUNTPASSWORD");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(30000);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(30000);

  // OPEN SETTINGS AND RUN UPDATE
  
  DigiKeyboard.sendKeyStroke(KEY_S,MOD_ALT_LEFT|MOD_SHIFT_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(15000);
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
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(50000000);
}
