#include <Servo.h> 
 
Servo servo1;  // create servo object to control a servo 

//int pos = 180;    // variable to store the servo position 

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
servo1.attach(10,544,2400); //контакт к которому подключен сервопривод 1
}

void loop() { // зацикленный алгоритм
    //servo1.write(85); // tell servo to go to position in 180
    delay(628);
    servo1.writeMicroseconds(1500); 
    delay(3000);
  }
