#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Cars.h"
#include <iostream>
	
using namespace std;

class Employee {
	string name;
	int ID;
public:
	Employee(string, int);
	void display();
};

Employee::Employee(string name, int ID) {
	this->name = name;
	this->ID = ID;
}

void Employee::display(){

	cout << "****************************************************************************************************************************************************\n" << endl;
	cout << "Employee name is : " << name << endl;
	cout << "employee ID is : " << ID << endl;
	cout << "****************************************************************************************************************************************************\n" << endl;
}
#endif 