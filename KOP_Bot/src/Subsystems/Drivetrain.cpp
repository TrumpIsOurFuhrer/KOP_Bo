// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.




#include "Drivetrain.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "../Commands/Driving.h"
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

Drivetrain::Drivetrain() : Subsystem("Drivetrain") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	aMotor = RobotMap::drivetrainCANTalon1;
	bMotor = RobotMap::drivetrainCANTalon2;
	cMotor = RobotMap::drivetrainCANTalon3;
	dMotor = RobotMap::drivetrainCANTalon4;
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void Drivetrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	SetDefaultCommand(new Driving());
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}

 /* Drive Robot with Joystick. Originallly only forward, now has implementation of smooth motion (limiting acceleration).
  *
  * */

void Drivetrain::DriveForwardJoystick(Joystick* joy){

		/*Attempt at smooth motion below
		 * Number 1 problem: fabs is only returning int values
		 * so the if statement always outputs false.
		*/
float fabsign, cdsign,abinput, cdinput, accelLim;
	abinput = joy->GetY()+.25*joy->GetZ(); //  Motor orientation C A  ^
	cdinput = -1*joy->GetY()+.25*joy->GetZ();//                  D B  |
	accelLim = .00001;

	if(abinput==0){
		fabsign = 0.5;
	}
	else { abinput > 0 ? fabsign = 1 : fabsign = -1;}

	if(cdinput==0){
		cdsign = -fabs(cMotor->Get())/cMotor->Get();  //Not sure why this is here, seems
	}//                                                 like it could create errors
	else {cdsign = fabs(cdinput)/cdinput;}

	//Smooth Motion implementation
	if(fabs(abinput-aMotor->Get()) > accelLim){
		aMotor->Set(aMotor->Get()+fabsign*accelLim);}
	else {
		aMotor->Set(abinput);}
	if(fabs(abinput-bMotor->Get()) > accelLim){
		bMotor->Set(bMotor->Get()+fabsign*accelLim);}
	else {
		bMotor->Set(abinput);}
	if(fabs(cdinput-cMotor->Get()) > accelLim){
		cMotor->Set(cMotor->Get()+cdsign*accelLim);}
	else {
		cMotor->Set(cdinput);}
	if(fabs(cdinput-dMotor->Get()) > accelLim){
		dMotor->Set(dMotor->Get()+cdsign*accelLim);}
	else {
		dMotor->Set(cdinput);}

	}

// Put methods for controlling this subsystem
// here. Call these from Commands.

