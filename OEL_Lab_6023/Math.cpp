#include "math.h"

math_marks::math_marks(string fName, string lName, double q1, double q2, double q3, double t1, double t2, double finalEx)
    : student(fName, lName, "Math"), final(finalEx) {
    test[0] = t1;
    test[1] = t2;
    quiz[0] = q1;
    quiz[1] = q2;
    quiz[2] = q3;
}

double math_marks::Math_grade() const {
    double quizAvg = (quiz[0] + quiz[1] + quiz[2]) / 3.0;
    return (quizAvg * 0.10) + (test[0] * 0.25) + (test[1] * 0.25) + (final * 0.40);
}
