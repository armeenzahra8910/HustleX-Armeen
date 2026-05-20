#pragma once
#include<iostream>
class Task
{
private:
	std::string title;
	std::string description;
	std::string duration;   // will be changed later from string to proper date.
	// User variable to be declared.
	bool isDone = false;

public:
	Task();
	Task(std::string title, std::string description, std::string duration);
	void setTitle(std::string title);
	void setDescription(std::string description);
	void setDuration(std::string duration);
	std::string getTitle();
	std::string getDescription();
	std::string getDuration();
	void createTask();
	//getUser will be declared later
	bool getState();














};

