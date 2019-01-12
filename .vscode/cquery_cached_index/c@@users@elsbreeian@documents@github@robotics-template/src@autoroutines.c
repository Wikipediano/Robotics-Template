// This source file should contain various autonomous routine functions and
// grouped together to run one of multiple autonomous routine sequences based on
// some selections
//

#include "auto.h"
#include "chassis.h"
#include "intake.h"
#include "lift.h"
#include "main.h"
#include "manipulator.h"
#include "portdef.h" // Cortex port defintions
#include "shooter.h"

void compAutoRedRight() {
  // All the veraious autonomous commands for the Competition, Red Sqaure
  // Right position go here.  Then this function is called in auto.c the
  // autonomous() function based on some selector input.
}

void testAutoDrive() {
  driveRobot(64);
  delay(2000);
  chassisStopDrive();
  delay(2000);
  driveRobot(64);
  delay(2000);
  chassisStopDrive();
  delay(2000);
  driveRobot(64);
  delay(2000);
  chassisStopDrive();
  delay(2000);
}
