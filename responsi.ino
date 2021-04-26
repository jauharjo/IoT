#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
int photodioda = A0;
int button1 = A1;
int button2 = A2;
int button2 = A3;
int pir = A4;
int Red = 8;
int Green = 9;
int Blue = 10;

void setup() {
  lcd.begin();
  button1, button2, button3 = 0;
}

void loop(){
  lcd.setCursor(0,0);
  lcd.print("Nur Jauhar Muslih");
  lcd.setCursor(2,1);
  lcd.print("19.11.2832");
}
