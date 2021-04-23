// UPDATE CHROMEBOOK
// CHROME OS VERSION 86

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

  // USER LOGIN VARIABLES
  // REPLACE 'YOUR-USERNAME' AND 'YOUR-PASSWORD'
  
  char ACCOUNTUSERNAME[] = "YOUR-USERNAME";
  char ACCOUNTPASSWORD[] = "YOUR-PASSWORD";

  // START TASK
  
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(MEDIUMDELAY);
  
  // ACCOUNT LOGIN
  
  DigiKeyboard.print("ACCOUNTUSERNAME");
  DigiKeyboard.delay(SHORTDELAY);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(MEDIUMDELAY);
  DigiKeyboard.print("ACCOUNTPASSWORD");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(LONGDELAY);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(MEDIUMDELAY);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(LONGDELAY);

  // OPEN SETTINGS AND RUN UPDATE
  
  DigiKeyboard.sendKeyStroke(KEY_S,MOD_ALT_LEFT|MOD_SHIFT_LEFT);
  DigiKeyboard.delay(MEDIUMDELAY);
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
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(10000000000);

  // END TASK
  
}
