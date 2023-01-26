void TracNormal() {
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
