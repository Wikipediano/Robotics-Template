#ifndef _CHASSIS_H_
#define _CHASSIS_H_
// Place all chassis related globals, function stub declartions in this
// header file.
//
// This file then can be included in any of the subsystem source files
// using #include "chassis.h"
#define WHEEL_DIAMETER 4
#define WHEEL_BASE 10

#define ARCADE_DRIVE false

#define JOY_SCALE .5

void driveRobot(int speed); // function declaration

// sets speeds of motors
void chasisSetOpControl(int left, int right);

// stops robot movement
void chassisStopDrive();

// drive with PID control
void drivePID(int masterPower);

#endif // _CHASSIS_H_
