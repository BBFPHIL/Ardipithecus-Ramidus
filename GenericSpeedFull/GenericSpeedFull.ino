/* Copy and paste the code below into the Arduino software */
#include "Driver.h"
//M1 and M2 are directional. 
//LOW LOW == forward
//M1 = LOW / M2 = HIGH == RIGHT
// M1 = HIGH / M2 = LOW == LEFT 
// M2 and M1 == backwards
//different speeds will create subtle, sharp and all sorts of angle turns 0 - 255
int E1 = 6; //M1 Speed Control
int E2 = 5; //M2 Speed Control
int M1 = 8; //M1 Direction Control
int M2 = 7; //M2 Direction Control

void setup()
{
  
  //create driver object here
  Serial.begin(9600);
}
void loop()
{
  
  Driver r1(M1, E1, M2, E2);
  
  int leftspeed = 255; //255 is maximum speed
  int rightspeed = 255;
  
  //speed vectors 
  int g1 = 25;
  int g2 = 50;
  int g3 = 75; 
  int g4 = 100;
  int g5 = 125; 
  int g6 = 150; 
  int g7 = 175;
  int g8 = 200; 
  int g9 = 225;
  int g10 = 255;

//#########################
//TESTING AREA
//#########################

  r1.archTenForward(225, 255, true);
  
/*

Zip Zag Test 85% accurate
  //Go backwards
  r1.goStraightBackward(255);
  delay(3000);
  
  //forward and turn right
  r1.goStraightForward(255);
  delay(1000);
  r1.turnNinty(255, true);
  
  //forward and turn right
  r1.goStraightForward(255);
  delay(1000);
  r1.turnNinty(255, true);
  
  //Forward and turn left
  r1.goStraightForward(255);
  delay(1000);
  r1.turnNinty(255, false);
  
  //Forward and turn right
  r1.goStraightForward(255);
  delay(500);
  r1.turnNinty(255, true);
  
  //Go forward
  r1.goStraightForward(255);
  delay(1000);
  //delay(100);
*/

}

