// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
CANTalon* RobotMap::drivetrainCANTalon1 = NULL;
CANTalon* RobotMap::drivetrainCANTalon2 = NULL;
CANTalon* RobotMap::drivetrainCANTalon3 = NULL;
CANTalon* RobotMap::drivetrainCANTalon4 = NULL;
DoubleSolenoid* RobotMap::pneumaticsds1 = NULL;
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();

	drivetrainCANTalon1 = new CANTalon(0);
	//lw->AddActuator("Drivetrain", "CANTalon1", (CANTalon*) drivetrainCANTalon1);
	
	drivetrainCANTalon2 = new CANTalon(1);
	//lw->AddActuator("Drivetrain", "CANTalon2", (CANTalon*) drivetrainCANTalon2);
	
	drivetrainCANTalon3 = new CANTalon(2);
	//lw->AddActuator("Drivetrain", "CANTalon 3", (CANTalon*) drivetrainCANTalon3);
	
	drivetrainCANTalon4 = new CANTalon(3);
	//lw->AddActuator("Drivetrain", "CANTalon 4", (CANTalon*) drivetrainCANTalon4);
	

	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS

	pneumaticsds1 = new DoubleSolenoid(0,1);
}
