#include "User.h"
#include <iostream>



User::User(std::string userName, std::string address, std::string tasks,
	std::string email, std::string contactNo)
	:userName(userName), address(address), tasks(tasks),
	email(email), contactNo(contactNo) {
};

std::string User::getUserName()
{
	return this->userName;
}
std::string User::getAddress()
{
	return this->address;
}
std::string User::getTasks()
{
	return this->tasks;
}
std::string User::getEmail()
{
	return this->email;
}
std::string User::getContactNo()
{
	return this->contactNo;
}
void User::setUserName(std::string userN)
{
	this->userName = userN;
}
void User::setAddress(std::string address)
{
	this->address = address;
}
void User::setTasks(std::string tasks) // discard me later.
{
	this->tasks = tasks;
}
void User::setEmail(std::string email)
{
	this->email = email;
}
void User::setContactNo(std::string contNo)
{
	this->contactNo = contNo;
}



