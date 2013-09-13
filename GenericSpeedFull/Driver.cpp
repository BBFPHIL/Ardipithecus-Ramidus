#include "Driver.h"

//Default Constructor
//@param M1: Motor one pin
//@param M2: Motor two pin
//@param E1: Direction pin
//@param E2: Direction pin
Driver::Driver(int M1, int E1, int M2, int E2){
  _M1 = M1;
  pinMode(_M1, OUTPUT);
  _M2 = M2;
  pinMode(_M2, OUTPUT);
  _E1 = E1;
  pinMode(_E1, OUTPUT);
  _E2 = E2;
  pinMode(_E2, OUTPUT);
      
}

//turnNinty
//turning 90 degrees penidng true or false for right
//@param mph: speed min==0 max==255 pwm or equivalent mapped
//@param rl: true == right false = left
void Driver::turnNinty(int mph, boolean rl){       
  if(rl == true){
    analogWrite(_E1, mph);
    digitalWrite(_M1, LOW);
    analogWrite(_E2, mph);
    digitalWrite(_M2, HIGH);
    delay(1225);//1.2 seconds full turn
  }else{
    analogWrite(_E1, mph);
    digitalWrite(_M1, HIGH);
    analogWrite(_E2, mph);
    digitalWrite(_M2, LOW);
    delay(1225);//1.2 seconds full turn
   }
}


void Driver::archTenForward(int mph1, int mph2, boolean rl){
  if(rl == true){
    analogWrite(_E1, mph2);
    digitalWrite(_M1, LOW);
    analogWrite(_E2, mph1);
    digitalWrite(_M2, LOW);
    delay(1225);//1.2 seconds full turn
  }else{
    analogWrite(_E1, mph1);
    digitalWrite(_M1, LOW);
    analogWrite(_E2, mph2);
    digitalWrite(_M2, LOW);
    delay(1225);//1.2 seconds full turn
   }
}

//Go straight forward
//@param mph: speed min==0 max==255 pwm or equivalent mapped
void Driver::goStraightForward(int mph){
  analogWrite(_E1, mph);
  digitalWrite(_M1, LOW);
  analogWrite(_E2, mph);
  digitalWrite(_M2, LOW);
  //delay(1225);//1.2 seconds full turn
}

//Go straight backwards
//@param mph: speed min==0 max==255 pwm or equivalent mapped
void Driver::goStraightBackward(int mph){
  analogWrite(_E1, mph);
  digitalWrite(_M1, HIGH);
  analogWrite(_E2, mph);
  digitalWrite(_M2, HIGH);
  //delay(1225);//1.2 seconds full turn
}
