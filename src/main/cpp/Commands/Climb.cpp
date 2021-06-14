/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/Climb.h"

Climb::Climb() 
{
  Requires(Robot::driveTrain.get());
}

// Called when the command is initially scheduled.
void Climb::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void Climb::Execute() {
  Robot::driveTrain->Climber();
}

// Called once the command ends or is interrupted.
void Climb::End() {
  Robot::driveTrain->StopClimb();
}

// Returns true when the command should end.
bool Climb::IsFinished() { return false; }
