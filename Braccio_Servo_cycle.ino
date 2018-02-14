
/*
This sketch use oscillator library to move servos cycling to all extents
Hints and tutorial from: http://www.iearobotics.com/wiki/index.php?title=ArduSnake:_Arduino_Modular_Snake_Robots_Library
Comment other servo movement to calibrate single servo move
*/

#include <Oscillator.h>
#include <Servo.h>
#define RS 2 //pin attached to rotation servo
#define OS 3 //pin attached to "humerus" servo
#define BS 4 //pin attached to brace servo
#define HS 5 // pin attached to hand servo

Oscillator braccio[4]; //declare 4 indipendent oscillators

void setup() {
  // attach servos to oscillators
  braccio[0].attach(RS);
  braccio[1].attach(OS);
  braccio[2].attach(BS);
  braccio[3].attach(HS);

/* Configure oscillator for rotation servo
 *  SetPh configure phase: it determines in which part of the cycle the servo starts (degrees): in one end, in the other end, in the middle....
 *  SetO configure offset: The mean angle (in degrees). The servo will oscillate symmetrically around this angle.
 *  SetA configure amplitude: How far the servo moves from the mean angle (in degrees)
 *  SetT configure time: The oscillation period (in ms)
 */
  braccio[0].SetPh(DEG2RAD(0));
  braccio[0].SetO(0);
  braccio[0].SetA(45);
  braccio[0].SetT(2000); 

  //Configure oscillator for humerus servo
  braccio[1].SetPh(DEG2RAD(0));
  braccio[1].SetO(0);
  braccio[1].SetA(45);
  braccio[1].SetT(2000); 

  //Configure oscillator for brace servo
  braccio[2].SetPh(DEG2RAD(0));
  braccio[2].SetO(0);
  braccio[2].SetA(45);
  braccio[2].SetT(2000); 

  //Configure oscillator for hand servo
  braccio[3].SetPh(DEG2RAD(0));
  braccio[3].SetO(0);
  braccio[3].SetA(45);
  braccio[3].SetT(2000); 

}

void loop() {
  // move cycling servos
  // comment line to stop one or more servos
  braccio.[0].refresh();
  braccio.[1].refresh();
  braccio.[2].refresh();
  braccio.[3].refresh();
}
