#include "chassis.h" // ensures that the corresponding header file (chassis.h) is included
#include "main.h"    // includes API.h and other headers
#include "portdef.h" // All port defintions on the cortex need to be included

// Place all chassis specific functions here, forexample
// void driveForDistancePID(int speed, int distance) {}

void driveRobot(int speed) {
  // This function drives the robot forward/backwards at given speed
  motorSet(LEFT_M_FRONT, speed);
  motorSet(RIGHT_M_FRONT, -speed);
  motorSet(LEFT_M_REAR, speed);
  motorSet(RIGHT_M_REAR, -speed);
}

void chasisSetOpControl(int left, int right) {
  motorSet(LEFT_M_FRONT, left);
  motorSet(RIGHT_M_FRONT, -right);
  motorSet(LEFT_M_REAR, left);
  motorSet(RIGHT_M_REAR, -right);
}

void chassisStopDrive() {
  motorSet(LEFT_M_FRONT, 0);
  motorSet(RIGHT_M_FRONT, 0);
  motorSet(LEFT_M_REAR, 0);
  motorSet(RIGHT_M_REAR, 0);
}
