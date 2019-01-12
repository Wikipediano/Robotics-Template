#ifndef _PORTDEF_H_
#define _PORTDEF_H_

#include "API.h"
// Place all cortex port defeintions here, you should have
// a section for the motors, analog sensors and deigital sensors
// If you are using Quadruatic ENcoders you may also have a section
// declaring the ENcoder Object.
//
// This file then can be included in any of the subsystem source files
// using #include "portdef.h"

// ---------------------MOTOR PORTS-----------------------------------
#define LEFT_M_FRONT 3  // motor on left side of robot in port #3
#define RIGHT_M_FRONT 2 // motor on right side of robot in port #2
#define LEFT_M_REAR 5   // motor on left side of robot in port #5
#define RIGHT_M_REAR 4  // motor on right side of robot in port #4
// ---------------------DIGITAL PORTS---------------------------------
// encoder on the left of the robot in ports #3 and #2
#define ENCODER_LEFT_TOP 3
#define ENCODER_LEFT_BOTTOM 2
// encoder on the right of the robot in ports #4 and #5
#define ENCODER_RIGHT_TOP 4
#define ENCODER_RIGHT_BOTTOM 5

// ---------------------DEBUGGING-----------------------------------------
#define DEBUG_ON true
#define VEXNET_MANUAL false
#define VEXNET_TIME 15

// ---------------------ENCODER DECLARATIONS--------------------------
Encoder encoderLM;
Encoder encoderRM;

#endif // _PORTDEF_H_
