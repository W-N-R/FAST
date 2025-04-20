#pragma once
#ifndef SELLER_H
#define SELLER_H

#include "Cars.h"
#include <iostream>
#include <string>
using namespace std;

class Seller {
private:
    string name;
    string contactNumber;
    string email;

public:

    Seller(string name, string contact, string email);
    void displaySellerInfo() const;
    Cars* sellCar(string model, int year, double price, double engineCapacity, string transmission, string chassisNumber);
};

Seller::Seller(string name, string contact, string email) {
    this->name = name;
    this->contactNumber = contact;
    this->email = email;
}

void Seller::displaySellerInfo() const {
    cout << "Seller Details:\n";
    cout << "Name: " << name << "\nContact: " << contactNumber << "\nEmail: " << email << "\n";
}

Cars* Seller::sellCar(string model, int year, double price, double engineCapacity, string transmission, string chassisNumber) {
    cout << name << " is selling a " << model << ".\n";
    return new Cars(model, year, price, engineCapacity, transmission, chassisNumber);
}

#endif 
