/*
 * Written on 2021-07-24 By K9CTS / Greg Dietsche.
 * Public Domain.
 * 
 * Wire your paddle to your teensy and then send morse code on:
 * https://hamradio.solutions/vband/
 * 
 * Originally Designed for Teensy++ 2.0 with the following pinout:
 *  PIN B1 is DAH
 *  PIN B0 is DIT
 *  PIN GND is ground
 */

const int pinDit = 20;
const int pinDah = 21;

void setup() {
  pinMode(pinDit, INPUT_PULLUP);
  pinMode(pinDah, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(pinDit)==LOW){
    Keyboard.press(MODIFIERKEY_LEFT_CTRL);
  }
  else{
    Keyboard.release(MODIFIERKEY_LEFT_CTRL);
  }
    
  if(digitalRead(pinDah)==LOW){
    Keyboard.press(MODIFIERKEY_RIGHT_CTRL);
  }
  else{
    Keyboard.release(MODIFIERKEY_RIGHT_CTRL);
  }
}
