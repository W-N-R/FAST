#pragma once
#ifndef SHOWROOM_H
#define SHOWROOM_H

#include "Cars.h"
#include "Seller.h"
#include <iostream> 
#include <string>
using namespace std;

class ShowRoom {
    string Name_of_showroom;
    string Address;
    string contact_number;
    string email;
    string sales_tax_registration_number;
    Cars* cars[15];
    int carCount;
public:
    ShowRoom(string, string, string, string, string);
    void display();
    void addCar(Cars* car);
    void showCars();
    Cars* getCar(int index);
    void sellCar(int index);
    int getCarCount() const;
    void generateReceipt(Cars* car);
    void buyCarFromCustomer(Seller seller);
    ~ShowRoom();
};

ShowRoom::ShowRoom(string name, string address, string contact, string email, string sale_tax) : carCount(0) {
    Name_of_showroom = name;
    Address = address;
    contact_number = contact;
    this->email = email;
    sales_tax_registration_number = sale_tax;
}
void ShowRoom::display() {
    cout << "****************************************************************************************************************************************************\n";
    cout << "      *******************************************************|    " << Name_of_showroom <<       "  |*************************************************************\n";
    cout << "Owner: WNR"<<"                                                .    .    .    .    .    ." << endl;
    cout << "Contact: " << contact_number << "\nEmail: " << email << "\nSales Tax: " << sales_tax_registration_number << "\n";
    cout << "****************************************************************************************************************************************************\n";
}

void ShowRoom::addCar(Cars* car) {
    if (carCount < 15) {
        cars[carCount++] = car;
    }
    else {
        cout << "Showroom is full!\n";
    }
}

void ShowRoom::showCars() {
    cout << "\nAvailable Cars:\n";
    for (int i = 0; i < carCount; i++) {
        cout << i + 1 << ".\n";
        cars[i]->display();
    }
}

Cars* ShowRoom::getCar(int index) {
    if (index >= 0 && index < carCount) {
        return cars[index];
    }
    return nullptr;
}

void ShowRoom::sellCar(int index) {
    if (index >= 0 && index < carCount) {
        generateReceipt(cars[index]);
        delete cars[index];
        for (int i = index; i < carCount - 1; i++) {
            cars[i] = cars[i + 1];
        }
        carCount--;
    }
    else {
        cout << "Invalid selection!\n";
    }
}

int ShowRoom::getCarCount() const {
    return carCount;
}

void ShowRoom::generateReceipt(Cars* car) {
    display();
    cout << "Receipt for Purchased Car:\n";
    car->display();
    cout << "Total Price: $" << car->getFinalPrice() << "\n";
    cout << "-----------------------------------------------------------Thank you for your purchase!------------------------------------------------------------\n";
	cout << "****************************************************************************************************************************************************\n";
}

void ShowRoom::buyCarFromCustomer(Seller seller) {
    string model, transmission, chassisNumber;
    int year;
    double price, engineCapacity;

    cout << "Enter details of the car you want to sell:\n";
    cout << "Model: "; cin >> model;
    cout << "Year: "; cin >> year;
    cout << "Price: "; cin >> price;
    cout << "Engine Capacity: "; cin >> engineCapacity;
    cout << "Transmission (Manual/Automatic): "; cin >> transmission;
    cout << "Chassis Number: "; cin >> chassisNumber;
	cout << "****************************************************************************************************************************************************\n";
    Cars* car = seller.sellCar(model, year, price, engineCapacity, transmission, chassisNumber);
    addCar(car);
    cout << "Car successfully added to showroom inventory.\n";
}

ShowRoom::~ShowRoom() {
    for (int i = 0; i < carCount; i++)
        delete cars[i];
}

#endif
