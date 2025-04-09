#pragma once
#include <string>

class Employee{
private:
	int employeeID;
	std::string fullName;
	std::string position;
	double salary;

public:
	Employee(int employeeID, std::string& fullName, std::string& position, double salary)
		: employeeID(employeeID), fullName(fullName), position(position), salary(salary) {}

	int getID() const;

};

