#pragma once
#ifndef ENGLISH_H
#define ENGLISH_H

#include "student.h"

class english_marks : public student {
    double attendance, project, midterm, final_exam;
public:
    english_marks(string, string, double, double, double, double);
    double English_grade() const;
    double get_grade() const override {
        return English_grade();
    }
};

#endif 
