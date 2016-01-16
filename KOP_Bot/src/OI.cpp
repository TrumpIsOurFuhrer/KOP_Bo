// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/Drive_Forward.h"
#include "Commands/Driving.h"
#include "Commands/Test1Solenoid.h"
#include "Commands/Test2Solenoid.h"

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
	// Process operator interface input here.
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS

	driver = new Joystick(0);
	
	forward = new JoystickButton(driver, 1);
	forward->WhileHeld(new Drive_Forward());
	test1solenoid = new JoystickButton(driver, 2);
	test1solenoid->WhileHeld(new Test1Solenoid());
	test2solenoid = new JoystickButton(driver, 3);
	test2solenoid->WhileHeld(new Test2Solenoid());


        // SmartDashboard Buttons
	SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());

	SmartDashboard::PutData("Drive_Forward", new Drive_Forward());

        // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

Joystick* OI::getdriver() {
	return driver;
}

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
