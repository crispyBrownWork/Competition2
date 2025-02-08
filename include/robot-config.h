using namespace vex;

extern brain Brain;

//To set up a motor called LeftFront here, you'd use
//extern motor LeftFront;

//Add your devices below, and don't forget to do the same in robot-config.cpp:

extern motor LeftFront;
extern motor LeftMiddle;
extern motor LeftBack;
extern motor RightFront;
extern motor RightMiddle;
extern motor RightBack;

extern motor55 Intake;
extern motor55 Conveyor;
extern motor55 LadyBrown;

extern inertial Inertial;
extern rotation Rotation;
extern vision ColorSort;
extern digital_out Solenoid;

extern controller controller1;

void  vexcodeInit( void );