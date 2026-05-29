#pragma once
#include<iostream>

class User;

class Task
{
private:
	std::string title;
	std::string description;
	std::string address;
	int task_reward{};
	User* user = nullptr;
	// User variable to be declared.
	bool isDone = false;

public:
	Task();
	Task(std::string title, std::string description);
	void setTitle(std::string title);
	void setDescription(std::string description);
	void setAddress(std::string addrses);
	void setReward(int value);
	void setUser(User* user);
	std::string getDescription();

	//getUser will be declared later
	bool getState();
	std::string getTitle();
	std::string getAddress();
	int Get_task_reward();

	std::string get_contact_USER(); // gets contact number from the user.

};

