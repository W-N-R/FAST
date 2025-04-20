#pragma once
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>
using namespace std;

class Customer {
private:
    string name;
    string contactNumber;
    string email;
    string address;
public:
    Customer(string name, string contact, string email, string address);
    void displayCustomerInfo() const;
    string getName() const;
    string getContact() const;
    string getEmail() const;
    string getAddress() const;
};

Customer::Customer(string name, string contact, string email, string address) {
    this->name = name;
    this->contactNumber = contact;
    this->email = email;
    this->address = address;
}

void Customer::displayCustomerInfo() const {
    cout << "Customer Details:\n";
    cout << "Name: " << name << "\nContact: " << contactNumber << "\nEmail: " << email << "\nAddress: " << address << "\n";
}

#endif 
