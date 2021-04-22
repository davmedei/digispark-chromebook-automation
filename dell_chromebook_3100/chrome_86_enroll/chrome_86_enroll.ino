#include "DigiKeyboard.h"

void setup() {}

void loop() {

  // DELAY VARIABLES
  // IN MILLISECONDS
  // 1000 MILLISECONDS IS 1 SECOND
  
  int SHORTDELAY, MEDIUMDELAY, LONGDELAY;
  SHORTDELAY = 500;
  MEDIUMDELAY = 10000;
  LONGDELAY = 20000;

  // WIFI CONNECTION VARIABLES
  // UPDATE 'YOUR-WIFI-SSID' AND 'YOUR-WIFI-PASSWORD'
  
  char WIFISSID[] = "YOUR-WIFI-SSID";
  char WIFIPASSWORD[] = "YOUR-WIFI-PASSWORD";

  // CHROME OS VER 86 ENROLLMENT
  
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(MEDIUMDELAY);

  // CONNECT TO WIFI
  
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(MEDIUMDELAY);
  DigiKeyboard.sendKeyStroke(KEY_S,MOD_ALT_LEFT|MOD_SHIFT_LEFT);
  DigiKeyboard.delay(SHORTDELAY);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(SHORTDELAY);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(SHORTDELAY);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(SHORTDELAY);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(SHORTDELAY);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(SHORTDELAY);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(SHORTDELAY);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(SHORTDELAY);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(SHORTDELAY);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(MEDIUMDELAY);
  DigiKeyboard.print(WIFISSID);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(SHORTDELAY);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(SHORTDELAY);
  DigiKeyboard.sendKeyStroke(81);
  DigiKeyboard.delay(SHORTDELAY);
  DigiKeyboard.sendKeyStroke(81);
  DigiKeyboard.delay(SHORTDELAY);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(SHORTDELAY);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(SHORTDELAY);
  DigiKeyboard.print(WIFIPASSWORD);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(MEDIUMDELAY);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(SHORTDELAY);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(SHORTDELAY);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(LONGDELAY);
  
  // AGREE TERMS OF SERVICE
  
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(SHORTDELAY);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(SHORTDELAY);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(SHORTDELAY);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(SHORTDELAY);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(SHORTDELAY);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(SHORTDELAY);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(SHORTDELAY);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(LONGDELAY);
  
  // ENTERPRISE ENROLLMENT LOGIN
  
  DigiKeyboard.sendKeyStroke(KEY_E, MOD_ALT_LEFT|MOD_CONTROL_LEFT);
  DigiKeyboard.delay(MEDIUMDELAY);
  DigiKeyboard.print("ENROLLUSERNAME");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(MEDIUMDELAY);
  DigiKeyboard.print("ENROLLPASSWORD");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  // END OF TASK
  
  DigiKeyboard.delay(10000000000);
}
