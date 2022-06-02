#include <Servo.h>
Servo portal;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  portal.attach(4);
  portal.write(90);
}

void loop() {
  // put your main code here, to run repeatedly:
  int dataterkirim = Serial.read();
  if (dataterkirim == '1') {
    portal.write(90);//terbuka
  }
  if (dataterkirim == '0') {
    portal.write(0);//tertutup
  }


  
}
