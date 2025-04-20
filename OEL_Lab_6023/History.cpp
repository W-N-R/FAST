#include "history.h"

history_marks::history_marks(string fName, string lName, double paper, double mid, double finalEx)
    : student(fName, lName, "History"), term_paper(paper), mid_term(mid), final_exam(finalEx) {
}

double history_marks::History_grade() const {
    return (term_paper * 0.25) + (mid_term * 0.35) + (final_exam * 0.40);
}
