#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;

//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);

//Add your devices below, and don't forget to do the same in robot-config.h:

motor LeftFront = motor(PORT3, ratio6_1, true);
motor LeftMiddle = motor(PORT2, ratio6_1, true);
motor LeftBack = motor(PORT5, ratio6_1, true);
motor RightFront = motor(PORT15, ratio6_1, false);
motor RightMiddle = motor(PORT14, ratio6_1, false);
motor RightBack = motor(PORT13, ratio6_1, false);

motor55 Intake = motor55(PORT4, false);
motor55 Conveyor = motor55(PORT20, false);
motor55 LadyBrown = motor55(PORT18, false);

inertial Inertial = inertial(PORT16);
rotation Rotation = rotation(PORT7);
// optical ColorSort = optical(PORT18);
digital_out Solenoid = digital_out(Brain.ThreeWirePort.H);

controller controller1 = controller(primary);

void vexcodeInit( void ) {
  // nothing to initialize
}