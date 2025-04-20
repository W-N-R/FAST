#pragma once
#ifndef USED_CARS_H
#define USED_CARS_H

#include "Cars.h"

class UsedCar : public Cars {
    string registrationNumber;
public:

    UsedCar(string model, int year, double price, double engineCapacity, string transmission, string chassisNumber, string registrationNumber);
    void display() const override;
};

UsedCar::UsedCar(string model, int year, double price, double engineCapacity, string transmission, string chassisNumber, string registrationNumber) {
	this->model = model;
	this->year = year;
	this->price = price;
	this->engineCapacity = engineCapacity;
	this->chassisNumber = chassisNumber;
	this->transmission = transmission;
    this->registrationNumber = registrationNumber;
}

void UsedCar::display() const {
    Cars::display();
    cout << "Registration Number: " << registrationNumber << "\n";
}

#endif 
