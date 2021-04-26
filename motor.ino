#include <Servo.h>
//Inisiasi
Servo servo;
int merah = 3;
int hijau = 5;
int biru = 6;
int s1 = 10;
int s2 = 11;
int s3 = 12;
int s4 = 13;

void setup() {

  servo.attach(9);
  pinMode(merah, OUTPUT);
  pinMode(hijau, OUTPUT);
  pinMode(biru, OUTPUT);

}

void loop() {

  // Posisi Servo 0 derajat
  servo.write(00);
  // Led menyala berwarna Merah(red)
  analogWrite(merah, 255);
  analogWrite(hijau, 0);
  analogWrite(biru, 0);
  delay(1000);

  // Posisi Servo 90 derajat
  servo.write(90);
  // Led menyala berwarna Ungu(red+blue)
  analogWrite(merah, 255);
  analogWrite(hijau, 0);
  analogWrite(biru, 255);
  delay(1000);

  // Posisi Servo 180 derajat
  servo.write(180);
  // Led menyala berwarna Putih(semua berwarna menyala red+green+blue)
  analogWrite(merah, 255);
  analogWrite(hijau, 255);
  analogWrite(biru, 255);
  delay(1000);

  // Stepper bergerak kekanan/searah jarum jam(1-2-3-4)
  step1();
  delay(25);
  step2();
  delay(25);
  step3();
  delay(25);
  step4();
  delay(25);
  // Led menyala berwarna Kuning(red+green)
  analogWrite(merah, 255);
  analogWrite(hijau, 255);
  analogWrite(biru, 0);
  delay(2000);

  // Stepper bergerak kekiri/berlawanan jarum jam(4-3-2-1)
  step4();
  delay(25);
  step3();
  delay(25);
  step2();
  delay(25);
  step1();
  delay(25);
  // Led menyala berwarna Hijau(green)
  analogWrite(merah, 0);
  analogWrite(hijau, 255);
  analogWrite(biru, 0);
  delay(2000);
}

//fungsi pergerakan Stator motorstepper
void step1() {
  digitalWrite(s1, LOW);
  digitalWrite(s2, LOW);
  digitalWrite(s3, HIGH);
  digitalWrite(s4, HIGH);
}
void step2() {
  digitalWrite(s1, HIGH);
  digitalWrite(s2, LOW);
  digitalWrite(s3, LOW);
  digitalWrite(s4, HIGH);
}
void step3() {
  digitalWrite(s1, HIGH);
  digitalWrite(s2, HIGH);
  digitalWrite(s3, LOW);
  digitalWrite(s4, LOW);
}
void step4() {
  digitalWrite(s1, LOW);
  digitalWrite(s2, HIGH);
  digitalWrite(s3, HIGH);
  digitalWrite(s4, LOW);
}
