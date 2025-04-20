#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class student {
protected:
    string f_name, l_name, course;
public:
    student() {}
    student(string fName, string lName, string course) : f_name(fName), l_name(lName), course(course) {}
    virtual ~student() {}
    string get_full_name() const { return f_name + " " + l_name; }
    string get_course() const { return course; }
    virtual double get_grade() const = 0; 
};

#endif 
