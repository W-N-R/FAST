#pragma once
#pragma once
#ifndef STUDENT_MANAGER_H
#define STUDENT_MANAGER_H

#include "student.h"

using namespace std;

class StudentManager {
private:
    student** students;
    int studentCount;
    
public:
    StudentManager();
    ~StudentManager();

    void take_students_from_file(const string& filename);
    void return_report(const string& filename);
};

#endif
