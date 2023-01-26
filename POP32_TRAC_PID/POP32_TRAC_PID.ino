#include <POP32.h>
int  L1, L2, L3, C, R1, R2, R3;

void setup() {
  ShowADC();
  sw_OK_press();
  beep();
}

void loop() {
  TracNormal();
}
