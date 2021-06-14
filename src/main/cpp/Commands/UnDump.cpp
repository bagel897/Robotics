/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/UnDump.h"

UnDump::UnDump() {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void UnDump::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void UnDump::Execute() {
  Robot::driveTrain->Undump();
}

// Make this return true when this Command no longer needs to run execute()
bool UnDump::IsFinished() { return false; }

// Called once after isFinished returns true
void UnDump::End() {
  Robot::driveTrain->StopDump();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void UnDump::Interrupted() {
  End();
}
