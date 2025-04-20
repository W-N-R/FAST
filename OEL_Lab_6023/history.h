#pragma once
#ifndef HISTORY_H
#define HISTORY_H

#include "student.h"

class history_marks : public student {
    double term_paper, mid_term, final_exam;
public:
    history_marks(string, string, double, double, double);
    double History_grade() const;
    double get_grade() const override {
        return History_grade();
    }
};

#endif // HISTORY_H
