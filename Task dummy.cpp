#include "Task.h"

Task::Task()
{

}


Task::Task(std::string title, std::string description) :
	title(title), description(description) {
}

void Task::setTitle(std::string title)
{
	this->title = title;
}

void Task::setDescription(std::string description)
{
	this->description = description;
}

void Task::setDuration(std::string duration)
{
	this->duration = duration;
}

std::string Task::getTitle()
{
	return this->title;
}

std::string Task::getDescription()
{
	return this->description;
}

std::string Task::getDuration()
{
	return this->duration;
}

void Task::createTask()
{
	//to be developed later.

}

bool Task::getState()
{
	return this->isDone;

}





