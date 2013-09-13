//Driver header file will hold all maneauvering functions for the robots motors and driver
#ifndef Driver_h
#define Driver_h
#include "Arduino.h"


class Driver{
  
  private:
    int _M1;
    int _M2; 
    int _E1;
    int _E2;
  
  public:
  
    Driver();
    
    //Default Constructor
    //@param M1: Motor one pin
    //@param M2: Motor two pin
    //@param E1: Direction pin
    //@param E2: Direction pin
    Driver(int M1, int E1, int M2, int E2);
    
    //turnNinty
    //turning 90 degrees penidng true or false for right
    //@param mph: speed min==0 max==255 pwm or equivalent mapped
    //@param rl: true == right false = left
    void turnNinty(int mph, boolean rl);
    
    //Go straight forward
    //@param mph: speed min==0 max==255 pwm or equivalent mapped
    void goStraightForward(int mph);
    
    //Go straight backwards
    //@param mph: speed min==0 max==255 pwm or equivalent mapped
    void goStraightBackward(int mph);
    
    //Go forward ten degree arch
    void archTenForward(int mph1, int mph2, boolean rl);
    
};
#endif
