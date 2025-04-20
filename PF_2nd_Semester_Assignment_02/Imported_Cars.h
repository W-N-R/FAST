#pragma once
#ifndef IMPORTED_CARS_H
#define IMPORTED_CARS_H

#include "Cars.h"

class ImportedCar : public Cars {
    string importDate;
    string grade;
public:
    ImportedCar(string model, int year, double price, double engineCapacity, string transmission, string chassisNumber, string importDate, string grade);
    void display() const override;
};

ImportedCar::ImportedCar(string model, int year, double price, double engineCapacity, string transmission, string chassisNumber, string importDate, string grade)
    : Cars(model, year, price, engineCapacity, transmission, chassisNumber) {
    this->importDate = importDate;
    this->grade = grade;
}

void ImportedCar::display() const {
    Cars::display();
    cout << "Import Date: " << importDate << "\nGrade: " << grade << "\n";
}

#endif 
