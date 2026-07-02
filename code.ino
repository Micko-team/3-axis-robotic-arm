#include <Servo.h>

#define A 2
#define B 4
#define C 3
#define D 5
#define K 6
#define X A1
#define Y A0

Servo servo1,servo2,servo4;

void setup() {

  servo1.attach(10);
  servo2.attach(9);
  servo4.attach(11);

  Serial.begin(9600);

  pinMode(13,OUTPUT);
  pinMode( 2,INPUT);
  digitalWrite(2,HIGH);
  pinMode(3,INPUT);
  digitalWrite(3,HIGH);
  pinMode(4,INPUT);
  digitalWrite(4,HIGH);
  pinMode(5,INPUT);
  digitalWrite(5,HIGH);
  pinMode(6,INPUT);
  digitalWrite(6,HIGH);
  pinMode(X, INPUT);
  pinMode(Y, INPUT);

}

void loop() {
  servo1.attach(10);

  int x = analogRead(X);

  int  servo1_1 = digitalRead(D);
  int  servo1_0 = digitalRead(B);
  int  servo2_1 = digitalRead(C);
  int  servo2_0 = digitalRead(A);
  

  if(servo1_1 == LOW){
    servo1.write(86);
  }
  else if(servo1_0 == LOW){
    servo1.write(180);
  }

  else{

    if (servo2_0 == LOW){
      servo2.write(0);
    }

    else if(servo2_1 == LOW){
      servo2.write(180);
    }
    else if (x > 800 ){
      servo4.write(0);
    }
    else if(x < 200){
      servo4.write(180);
    }
    else{
      servo2.write(90);
      servo4.write(90);
    }

    for(int speed = 100; speed<115; speed++){
    servo1.write(speed);
    delay(5);
    }
  }
}
