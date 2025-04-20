#include "english.h"
#include <iostream>

english_marks::english_marks(string fName, string lName, double att, double proj, double mid, double finalEx)
    : student(fName, lName, "english"), attendance(att), project(proj), midterm(mid), final_exam(finalEx) {
  
}

double english_marks::English_grade() const {
    return (attendance * 0.10) + (project * 0.30) + (midterm * 0.30) + (final_exam * 0.30);
}
