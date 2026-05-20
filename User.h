#pragma once
#include <iostream>

class User
{
private:
	std::string userName;
	std::string address;
	std::string tasks; // this will be later converted into vector of task class.
	std::string email;
	std::string contactNo;
public:
	User() = default;
	User(std::string userName, std::string address, std::string tasks,
		std::string email, std::string contactNo);

	std::string getUserName();

	std::string getAddress();

	std::string getTasks();

	std::string getEmail();

	std::string getContactNo();

	void setUserName(std::string userN);

	void setAddress(std::string address);

	void setTasks(std::string tasks); // discard me later.

	void setEmail(std::string email);

	void setContactNo(std::string contNo);


};

