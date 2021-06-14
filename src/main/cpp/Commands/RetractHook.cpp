/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights d shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/RetractHook.h"

RetractHook::RetractHook() {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  Requires(Robot::driveTrain.get());
}

// Called just before this Command runs the first time
void RetractHook::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void RetractHook::Execute() {
  Robot::driveTrain->RetractHook();
}

// Make this return true when this Command no longer needs to run execute()
bool RetractHook::IsFinished() { return false; }

// Called once after isFinished returns true
void RetractHook::End() {
  Robot::driveTrain->StopHook();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RetractHook::Interrupted() {
  End();
}
