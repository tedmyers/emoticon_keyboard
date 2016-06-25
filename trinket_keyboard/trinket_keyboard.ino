/*
TrinketKeyboard
For Trinket by Adafruit Industries
*/

#include <TrinketKeyboard.h>

#define PIN_BUTTON_TOP  0
#define PIN_BUTTON_B    2
#define DELAY_AMOUNT    100

#define OS 0 // 0=mac,1=windows,2=linux

void setup()
{
  // button pins as inputs
  pinMode(PIN_BUTTON_TOP, INPUT);
  pinMode(PIN_BUTTON_B, INPUT);

  // turn on internal pull-up resistors
  digitalWrite(PIN_BUTTON_TOP, HIGH);
  digitalWrite(PIN_BUTTON_B, HIGH);
  // buttons are active-low, they read LOW when they are not pressed

  // start USB stuff
  TrinketKeyboard.begin();
}

// ಠ_ಠ
void print_serious(void)
{
    // ಠ
    // this types an alt code character
    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_0);
    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_C);
    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_A);
    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_0);
    // this releases the key (otherwise it is held down!)
    TrinketKeyboard.pressKey(0, 0);

    TrinketKeyboard.print("_");

    // ಠ
    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_0);
    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_C);
    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_A);
    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_0);
    // this releases the key (otherwise it is held down!)
    TrinketKeyboard.pressKey(0, 0);
}

 // ( ͡° ͜ʖ ͡°)
void print_lenny(void)
{
  //( U+0361 U+00B0 U+035C U+0296 U+0361 U+00B0)
    TrinketKeyboard.print("( ");

    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_0);
    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_3);
    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_6);
    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_1);
    TrinketKeyboard.pressKey(0, 0);

    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_0);
    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_2);
    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_D);
    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_A);
    TrinketKeyboard.pressKey(0, 0);

    TrinketKeyboard.print(" "); // necessary

    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_0);
    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_3);
    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_5);
    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_C);
    TrinketKeyboard.pressKey(0, 0);

    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_0);
    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_2);
    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_9);
    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_6);
    TrinketKeyboard.pressKey(0, 0);

    TrinketKeyboard.print(" "); // necessary

    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_0);
    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_3);
    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_6);
    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_1);
    TrinketKeyboard.pressKey(0, 0);

    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_0);
    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_2);
    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_D);
    TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_A);
    TrinketKeyboard.pressKey(0, 0);

    TrinketKeyboard.print(")");
}

void loop()
{
  // the poll function must be called at least once every 10 ms
  // or cause a keystroke
  // if it is not, then the computer may think that the device
  // has stopped working, and give errors
  TrinketKeyboard.poll();

  if (digitalRead(PIN_BUTTON_TOP) == LOW)
  {
    print_lenny();
    delay(DELAY_AMOUNT);
  }

  if (digitalRead(PIN_BUTTON_B) == LOW)
  {
    print_serious();
    delay(DELAY_AMOUNT);
  }
}
