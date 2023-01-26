#include <POP32.h>
int R1, R2, R3, L1, L2, L3, C;

void setup() {
  ShowADC();
  sw_OK_press();
  beep();
}

void loop() {
  motorRun();
  //  Forward();
  //  delay(1000);
  //  Backward();
  //  delay(1000);
  //  turnLeft();
  //  delay(500);
  //  turnRight();
  //  delay(500);
  //  Stop();
  //  delay(2000);

}

void ReadADC() {
  R3 = analog(0);
  R2 = analog(1);
  R1 = analog(2);
  C = analog(3);
  L1 = analog(4);
  L2 = analog(5);
  L3 = analog(6);
}

void ShowADC() {
  ReadADC();
  oled.text(2, 0, "R3 = %d", R3);
  oled.text(3, 0, "R2 = %d", R2);
  oled.text(4, 0, "R1 = %d", R1);
  oled.text(5, 0, "C = %d", C);
  oled.text(6, 0, "L1 = %d", L1);
  oled.text(7, 0, "L2 = %d", L2);
  oled.text(8, 0, "L3 = %d", L3);
  oled.show();
  oled.clear();
}

void Forward() {
  motor(1, 50);
  motor(2, 50);
}

void Backward() {
  motor(1, -50);
  motor(2, -50);
}

void turnLeft() {
  motor(1, 70);
  motor(2, -70);
}

void turnRight() {
  motor(1, -70);
  motor(2, 70);
}

void Stop() {
  motor(1, 0);
  motor(2, 0);
}

void Uturn() {
  motor(1, -70);
  motor(2, 70);
  delay(800);
}

void motorRun() {
  ReadADC();
  if (R1 < 3000 && L1 < 3000) { //ขวา=ขาว  ซ้าย=ขาว
    Forward();
  } else if (R1 < 3000 && L1 > 3000) { //ขวา=ขาว  ซ้าย=ดำ
    turnLeft();
  } else if (R1 > 3000 && L1 < 3000) { //ขวา=ดำ  ซ้าย=ขาว
    turnRight();
  } else if (R1 > 3000 && L1 > 3000) { //ขวา=ดำ  ซ้าย=ดำ
    Stop();
    delay(2000);
    Forward();
  }
  
}
