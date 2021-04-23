// ENTERPRISE ENROLL NEW CHROMEBOOK
// CHROME OS VERSION 86
// HP CHROMEBOOK 14 G4

#include "DigiKeyboard.h"

void setup() {}

void loop() {

  // DELAY VARIABLES
  // TYPE IN SECONDS HERE
  
  float sd, md, ld;
  
  sd = 0.5; // SHORT DELAY
  md = 10; // MEDIUM DELAY
  ld = 20; // LONG DELAY

  // CONVERT VARIABLES TO MILLISECONDS FOR DIGIKEYBOARD.DELAY()

  float SHORTDELAY, MEDIUMDELAY, LONGDELAY;
  
  SHORTDELAY = sd * 1000;
  MEDIUMDELAY = md * 1000;
  LONGDELAY = ld * 1000;

  // WIFI CONNECTION VARIABLES
  // REPLACE 'YOUR-WIFI-SSID' AND 'YOUR-WIFI-PASSWORD'
  
  char WIFISSID[] = "YOUR-WIFI-SSID";
  char WIFIPASSWORD[] = "YOUR-WIFI-PASSWORD";

  // ENTERPRISE ENROLLMENT LOGIN VARIABLES
  // REPLACE 'YOUR-ENROLL-USERNAME' AND 'YOUR-ENROLL-PASSWORD'
  
  char ENROLLUSERNAME[] = "YOUR-ENROLL-USERNAME";
  char ENROLLPASSWORD[] = "YOUR-ENROLL-PASSWORD";

  // START TASK
  
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
  DigiKeyboard.print(ENROLLUSERNAME);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(MEDIUMDELAY);
  DigiKeyboard.print(ENROLLPASSWORD);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);  
  DigiKeyboard.delay(10000000000);

  // END TASK
  
}
