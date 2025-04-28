//#include <iostream>
//#include <fstream>
//#include <cstring>
//
//using namespace std;
//
//
//struct Student {
//    char rollNumber[20] = {};
//    string name;
//    char courses[10][10] = {}; 
//    int courseCount = 0;
//};
//
//
//void DisplayStudent(const Student& data) {
//    cout << endl;
//    cout << "Roll Number: " << data.rollNumber << endl;
//    cout << "Name: " << data.name << endl;
//    cout << "Courses: ";
//    for (int i = 0; i < data.courseCount; i++) {
//        cout << data.courses[i] << " ";
//    }
//    cout << "\n----------------------------\n";
//}
//
//int main() {
//    ifstream Data_of_student("yourRollnumber.txt");
//    if (!Data_of_student) {
//        cout << "Error opening file!" << endl;
//        return 1;
//    }
//
//    int totalStudents;
//    Data_of_student >> totalStudents; 
//    Data_of_student.ignore();
//
//    int numStudents;
//    cout << "Enter the number of students you want to read: ";
//    cin >> numStudents;
//    cin.ignore();
//
//
//    if (numStudents > totalStudents) {
//        cout << endl;
//        cout << "Only " << totalStudents << " students are available in the file.\n";
//        numStudents = totalStudents;
//    }
//
//    Student* students = new Student[numStudents];
//
//    for (int i = 0; i < numStudents; i++) {
//        Data_of_student >> students[i].rollNumber; 
//        Data_of_student.ignore(); 
//        Data_of_student >> students[i].name; 
//        students[i].courseCount = 0;
//        while (Data_of_student >> students[i].courses[students[i].courseCount]) {
//            students[i].courseCount++;
//            if (Data_of_student.peek() == '\n' || Data_of_student.eof()) break; 
//        }
//        Data_of_student.ignore(); 
//    }
//
//    Data_of_student.close();
//
//    for (int i = 0; i < numStudents; i++) {
//        DisplayStudent(students[i]);
//    }
//
//    delete[] students; 
//
//    return 0;
//}
