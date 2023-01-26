#include <POP32.h>
void setup()
{
  oled.text(5, 0, "Hello POP - 32");
  oled.text(6, 0, "sorawit jaidee nakub");
  oled.show();
  sw_OK_press();
  oled.clear();
  beep();
}

void loop()
{
   motor(1, 100);
   motor(2, 100);
   delay(1000);
   motor(1, -100);
   motor(2, -100);
   delay(1000);
   motor(1, -100);
   motor(2, 100);
   delay(500);
  //fd2(50, 50);
  // delay(1000);
  // bk2(50, 50);
  // delay(1000);
}
