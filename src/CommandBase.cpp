#include "CommandBase.h"
#include "Commands/Scheduler.h"
#include "Subsystems/SingleMotor.h"

// Initialize a single static instance of all of your subsystems to NULL
OI* CommandBase::oi = NULL;
SingleMotor* CommandBase::motor = NULL;

CommandBase::CommandBase(const std::string &name) :
		Command(name)
{
}

CommandBase::CommandBase() :
		Command()
{

}

void CommandBase::init()
{
	oi = new OI();
	motor = new SingleMotor();
}
