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
CANTalon* RobotMap::drivetrainaMotor = NULL;
CANTalon* RobotMap::drivetrainbMotor = NULL;
CANTalon* RobotMap::drivetraincMotor = NULL;
CANTalon* RobotMap::drivetraindMotor = NULL;
Solenoid* RobotMap::pneumaticstestsolenoid = NULL;
Solenoid* RobotMap::pneumaticstest2solenoid = NULL;
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();

	drivetrainaMotor = new CANTalon(0);
	//lw->AddActuator("Drivetrain","aMotor", drivetrainaMotor);
	drivetrainbMotor = new CANTalon(1);
	//lw->AddActuator("Drivetrain","bMotor", drivetrainbMotor);
	drivetraincMotor = new CANTalon(2);
	//lw->AddActuator("Drivetrain","cMotor", drivetraincMotor);
	drivetraincMotor = new CANTalon(3);
	pneumaticstestsolenoid = new Solenoid(1);
	//lw->AddActuator("Pneumatics","Solenoid 1", pneumaticstestsolenoid);
	pneumaticstest2solenoid = new Solenoid(2);
	//lw->AddActuator("Pneumatics","Solenoid 2", pneumaticstest2solenoid);




	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
