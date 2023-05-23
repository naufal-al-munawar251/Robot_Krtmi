//sketch created by Akshay Joseph
char inputByte;
#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int potpin = 0;  // analog pin used to connect the potentiometer
int val;  

#define BanDepanKiri1 2
#define BanDepanKiri2 3

#define BanDepanKanan1 4
#define BanDepanKanan2 5

#define BanBelakangKiri1 8
#define BanBelakangKiri2 9

#define BanBelakangKanan1 10
#define BanBelakangKanan2 11


void setup() {
 Serial.begin(9600);
 pinMode(BanDepanKiri1,OUTPUT);
 pinMode(BanDepanKiri2,OUTPUT);

 pinMode(BanDepanKanan1,OUTPUT);
 pinMode(BanDepanKanan2,OUTPUT);

 pinMode(BanBelakangKiri1,OUTPUT);
 pinMode(BanBelakangKiri2,OUTPUT);

 pinMode(BanBelakangKanan1,OUTPUT);
 pinMode(BanBelakangKanan2,OUTPUT);

 myservo.attach(9);

}

void loop() {
while(Serial.available()>0){
  inputByte= Serial.read();
  Serial.println(inputByte);
  if (inputByte=='A'){
  analogWrite(BanDepanKiri1,100);
  analogWrite(BanDepanKiri2,0);
  analogWrite(BanDepanKanan1,100);
  analogWrite(BanDepanKanan2,0);

  analogWrite(BanBelakangKiri1,0);
  analogWrite(BanBelakangKiri2,100);
  analogWrite(BanBelakangKanan1,100);
  analogWrite(BanBelakangKanan2,0);
  }
  else if (inputByte=='B'){
  analogWrite(BanDepanKiri1,0);
  analogWrite(BanDepanKiri2,100);
  analogWrite(BanDepanKanan1,0);
  analogWrite(BanDepanKanan2,100);

  analogWrite(BanBelakangKiri1,100);
  analogWrite(BanBelakangKiri2,0);
  analogWrite(BanBelakangKanan1,0);
  analogWrite(BanBelakangKanan2,100);
  } 
  else if (inputByte=='C'){
  analogWrite(BanDepanKiri1,100);
  analogWrite(BanDepanKiri2,0);
  analogWrite(BanDepanKanan1,100);
  analogWrite(BanDepanKanan2,0);

  analogWrite(BanBelakangKiri1,0);
  analogWrite(BanBelakangKiri2,100);
  analogWrite(BanBelakangKanan1,100);
  analogWrite(BanBelakangKanan2,0);
  }
  else if (inputByte=='D'){
  analogWrite(BanDepanKiri1,100);
  analogWrite(BanDepanKiri2,0);
  analogWrite(BanDepanKanan1,100);
  analogWrite(BanDepanKanan2,0);

  analogWrite(BanBelakangKiri1,0);
  analogWrite(BanBelakangKiri2,100);
  analogWrite(BanBelakangKanan1,100);
  analogWrite(BanBelakangKanan2,0);
  }
  else if (inputByte=='E'){
  analogWrite(BanDepanKiri1,0);
  analogWrite(BanDepanKiri2,0);
  analogWrite(BanDepanKanan1,0);
  analogWrite(BanDepanKanan2,0);

  analogWrite(BanBelakangKiri1,0);
  analogWrite(BanBelakangKiri2,0);
  analogWrite(BanBelakangKanan1,0);
  analogWrite(BanBelakangKanan2,0);
  }
  }
}
