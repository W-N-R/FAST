#pragma once
#ifndef MATH_H
#define MATH_H

#include "student.h"

class math_marks : public student {
    double quiz[3], test[2], final;
public:
    math_marks(string, string, double, double, double, double, double, double);
    double Math_grade() const;
    double get_grade() const override {
        return Math_grade();
    }
};

#endif 
