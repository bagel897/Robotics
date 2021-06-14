// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
#include "frc/commands/Subsystem.h"
#include "frc/WPILib.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class DriveTrain: public frc::Subsystem {
private:
	// It's desirable that everything possible is private except
	// for methods that implement subsystem capabilities
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<frc::SpeedController> frontRight;
	std::shared_ptr<frc::SpeedController> backRight;
	std::shared_ptr<frc::SpeedControllerGroup> speedControllerGroup1;
	std::shared_ptr<frc::SpeedController> frontLeft;
	std::shared_ptr<frc::SpeedController> backLeft;
	std::shared_ptr<frc::SpeedControllerGroup> speedControllerGroup2;
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<frc::SpeedController> spoolOne;
	std::shared_ptr<frc::SpeedController> spoolTwo;
	std::shared_ptr<frc::SpeedController> spoolThree;
	std::shared_ptr<frc::SpeedController> myEx;
	double drive_x;
	double drive_y;
public:
	DriveTrain();
	void InitDefaultCommand() override;
	void Periodic() override;
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CMDPIDGETTERS
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CMDPIDGETTERS
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

	void DiffDrive(std::shared_ptr<frc::Joystick>);
	void DriveAuto();
	void DeployHook();
	void RetractHook();
	void Climber();
	void Stop();
	void StopHook();
	void StopClimb();
	void UnClimb();
	void Dump();
	void Undump();
	void StopDump();
};

#endif
