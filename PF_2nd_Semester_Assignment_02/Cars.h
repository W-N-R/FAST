#pragma once
#ifndef CARS_H
#define CARS_H

#include <iostream>
#include <string>
using namespace std;

class Cars {
protected:
    string model;
    int year;
    double price;
    double engineCapacity;
    string transmission;
    string chassisNumber;
public:
	Cars() {}
    Cars(string model, int year, double price, double engineCapacity, string transmission, string chassisNumber);
    virtual void display() const;
    virtual double getFinalPrice() const;
    virtual ~Cars() = default;
};

Cars::Cars(string model, int year, double price, double engineCapacity, string transmission, string chassisNumber) {
    this->model = model;
    this->year = year;
    this->price = price;
    this->engineCapacity = engineCapacity;
    this->transmission = transmission;
    this->chassisNumber = chassisNumber;
}

void Cars::display() const {
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
    cout << "Price: $" << price << endl;
    cout << "Engine Capacity : " << engineCapacity << "L" << endl;
    cout << "Transmission: " << transmission << endl;
    cout << "Chassis No : " << chassisNumber << endl;
}

double Cars::getFinalPrice() const {
    int currentYear = 2025; 
    if (currentYear - year > 5) {
        return price * 1.15; 
    }
    return price;
}

#endif 
