/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/RetractClimb.h"

RetractClimb::RetractClimb() {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void RetractClimb::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void RetractClimb::Execute() {
  Robot::driveTrain->UnClimb();
}

// Make this return true when this Command no longer needs to run execute()
bool RetractClimb::IsFinished() { return false; }

// Called once after isFinished returns true
void RetractClimb::End() {
  Robot::driveTrain->StopClimb();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RetractClimb::Interrupted() {
  End();
}
