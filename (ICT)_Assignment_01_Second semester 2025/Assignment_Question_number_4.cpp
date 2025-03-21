//#include <iostream>
//#include <fstream>
//#include <cstring>
//
//using namespace std;
//
//
//struct student
//{
//    char rollnumber[20] = {};
//    string name;
//    char courses[10][10] = {}; 
//    int coursecount = 0;
//};
//
//
//void displaystudent(const student& data) {
//    cout << endl;
//    cout << "roll number: " << data.rollnumber << endl;
//    cout << "name: " << data.name << endl;
//    cout << "courses: ";
//    for (int i = 0; i < data.coursecount; i++) {
//        cout << data.courses[i] << " ";
//    }
//    cout << "\n----------------------------\n";
//}
//
//int main() {
//    ifstream data_of_student("yourrollnumber.txt");
//    if (!data_of_student) {
//        cout << "error opening file!" << endl;
//        return 1;
//    }
//
//    int totalstudents;
//    data_of_student >> totalstudents; 
//    data_of_student.ignore();
//
//    int numstudents;
//    cout << "enter the number of students you want to read: ";
//    cin >> numstudents;
//    cin.ignore();
//
//
//    if (numstudents > totalstudents) {
//        cout << endl;
//        cout << "only " << totalstudents << " students are available in the file.\n";
//        numstudents = totalstudents;
//    //}
//
//    student* students = new student[numstudents];
//
//    for (int i = 0; i < numstudents; i++) {
//        data_of_student >> students[i].rollnumber; 
//        data_of_student.ignore(); 
//        data_of_student >> students[i].name; 
//        students[i].coursecount = 0;
//        while (data_of_student >> students[i].courses[students[i].coursecount]) {
//            students[i].coursecount++;
//            if (data_of_student.peek() == '\n' || data_of_student.eof()) break; 
//        }
//        data_of_student.ignore(); 
//    }
//      
//    data_of_student.close();
//
//    for (int i = 0; i < numstudents; i++) {
//        displaystudent(students[i]);
//    }
//
//    delete[] students; 
//
//    return 0;
//}
