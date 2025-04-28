////#include<iostream>
////#include<iomanip>
////using namespace std;
////
//////struct Student
//////{
//////	string name;
//////	int rollnumber;
//////	int batch;
//////	string discipline;
//////	float CGPA;
//////};
//////
//////
//////int main()
//////{
//////	Student Umair;
//////	cout << "Enter the name of Student: ";
//////	cin >> Umair.name;
//////	cout << "Enter the CGPA of student: ";
//////	return 0;
//////}
////
////
////int main() {
////	int a = 5;
////	int* p = &a;
////	int** q = &p;
////
////	cout<< *p <<endl;
////	cout<< **q <<endl;
////	cout<< p <<endl;
////	cout<< *q <<endl; 
////	
////	int* myPtr = new int;
////	int* yourPtr = new int;
////	*myPtr = 10;
////	*yourPtr = 2 * *myPtr + 3;
////	cout << *myPtr << " " << (*yourPtr - *myPtr + 5) << endl;
////	myPtr = yourPtr;
////	yourPtr = new int;
////	*yourPtr = 8;
////	cout << *myPtr << " " << *yourPtr << endl;
////	*myPtr = 17;
////	*yourPtr = 4;
////	cout << *myPtr << " " << *yourPtr << endl;
////	
////	double* length;
////	double* width;
////	cout << fixed << showpoint << setprecision(2);
////	length = new double;
////	width = new double;
////	*length = 6.5;
////	*width = 3.0;
////	cout << "Area: " << (*length) * (*width) << ", ";
////	cout << "Perimeter: " << 2 * (*length * *width) << endl;
////
////
////
////	double* baseRadius;
////	double* height;
////	cout << fixed << showpoint << setprecision(2);
////	baseRadius = new double;
////	*baseRadius = 1.5;
////	height = new double;
////	*height = 2 * (*baseRadius);
////	baseRadius = new double;
////	*baseRadius = 4.0;
////	cout << "Radius of the base: " << *baseRadius << endl;
////	cout << "Height: " << *height << endl;
////	cout << "Volume: " << 3.14 * (*baseRadius) * (*baseRadius)
////		<< endl;
////	cout << "Surface area: "
////		<< 2 * 3.14 * (*baseRadius) * (*height) << endl;
////
////
////
////	int* myListPtr = new int[10];
////	int* yourListPtr;
////	*myListPtr = 100;
////	for (int i = 0; i < 10; i++)
////		myListPtr[i] = i * (i - 1);
////
////	yourListPtr = myListPtr;
////
////	for (int i = 0; i < 10; i++)  // Fix incorrect indexing
////		cout << myListPtr[i] << " ";
////
////	cout << endl;
////
////	delete[] yourListPtr;  // Move delete to the end to avoid dangling pointer
////
////
////	
////		int** _2DArray;
////		int rows;
////
////		cin >> rows;
////		_2DArray = new int* [rows];
////		for (int i = 0; i < rows; i++)
////			_2DArray[i] = new int[i + 1];
////
////		for (int i = 0; i < rows; i++)
////			for (int k = 0; k < i + 1; k++)
////				_2DArray[i][k] = i + k;
////
////		for (int i = 0; i < rows; i++)
////		{
////			for (int k = 0; k < i + 1; k++)
////				cout << _2DArray[i][k] << " ";
////			cout << endl;
////		}
////		for (int i = 0; i < rows; i++)
////			delete[] _2DArray[i];
////		delete[] _2DArray;
////		
////		int* intList;
////		intList = new int[5];
////		for (int i = 0; i < 5; i++)
////			cin >> intList[i];
////		for (int i = 4; i > 0; i--)
////			intList[i] = intList[i] + intList[i - 1];
////		int sum = 0;
////		for (int i = 0; i < 5; i++)
////		{
////			cout << intList[i] << " ";
////			sum = sum + intList[i];
////		}
////		cout << endl << "Sum = " << sum << endl;
////
////
////
////
////			int* ptr = new int(20); // Allocating and initializing
////
////			cout << "Value: " << *ptr << endl; // Output: 20
////
////			delete ptr; // Free allocated memory
////			ptr = nullptr; // Avoid dangling pointer
////
////			return 0;
////	
////	
////
////}
////
//	
////#include <iostream>
////
////using namespace std;
////
////int main() {
////    int rows, cols;
////
////    // Taking input for rows and columns
////    cout << "Enter number of rows: ";
////    cin >> rows;
////    cout << "Enter number of columns: ";
////    cin >> cols;
////
////    // Dynamically allocating a 2D array
////    int** array = new int* [rows];
////    for (int i = 0; i < rows; i++) {
////        array[i] = new int [cols];
////    }
////
////    // Taking input for the 2D array
////    cout << "Enter elements of the array:\n";
////    for (int i = 0; i < rows; i++) {
////        for (int j = 0; j < cols; j++) {
////            cin >> array[i][j];
////        }
////    }
////
////    cout << "The entered 2D array is:\n";
////    for (int i = 0; i < rows; i++) {
////        for (int j = 0; j < cols; j++) {
////            cout << array[i][j] << " ";
////        }
////        cout << endl;
////    }
////
////    for (int i = 0; i < rows; i++) {
////        delete[] array;
////    }
////        return 0;
////}
//
//
//
////#include <iostream>
////#include <string>
////using namespace std;
////
////struct Student {
////    string name;
////    int rollNumber;
////};
////
////void displayStudent(const Student& student) {
////    cout << "Name: " << student.name << endl;
////    cout << "Roll Number: " << student.rollNumber << endl;
////}
////
////int main() {
////    Student student1;
////    student1.name = "Waleed";
////    student1.rollNumber = 6023; 
////
////    Student* ptr = &student1;
////    cout << "Through pointer output is :" << endl;
////    cout << "Name: " << ptr->name << endl;
////    cout << "Roll Number: " << ptr->rollNumber << endl << endl;
////
////    cout << "Displaying Student 1 using function:" << endl;
////    displayStudent(student1);
////    cout << endl;
////
////    int numStudents;
////    cout << "Enter number of students: ";
////    cin >> numStudents;
////
////    Student* students = new Student[numStudents];
////
////    for (int i = 0; i < numStudents; i++) {
////        cout << "Enter name of student " << i + 1 << ": ";
////        cin >> students[i].name;
////        cout << "Enter roll number of student " << i + 1 << ": ";
////        cin >> students[i].rollNumber;
////    }
////
////    cout << "\nDisplaying all student details:\n";
////    for (int i = 0; i < numStudents; i++) {
////        displayStudent(students[i]);
////        cout << endl;
////    }
////
////    delete[] students;
////
////    system("pause");
////}
//
//
////#include <iostream>
////using namespace std;
////
////struct student {
////	string name;
////	string roll_number;
////};
////
////void display(const student& yyyy) {
////	cout << "\nSo the Name via function is : ";
////	cout << yyyy.name << endl;
////	cout << "So the roll number via function is : ";
////	cout << yyyy.roll_number;
////	}
////
////int main() {
////
////	student Student_number_one;
////	cout << "Your name is :";
////	Student_number_one.name = "Muhammad Waleed";
////	cout << Student_number_one.name << endl;
////	cout << "Roll Number is : ";
////	Student_number_one.roll_number = "24L_6023 (BSEE)";
////	cout << Student_number_one.roll_number;
////
////	student* Student_ptr;
////	Student_ptr = &Student_number_one;
////	cout << "\nSo the data through pointer is : " << endl;
////	cout << "Name accessed VIA pointer is : ";
////	cout << Student_ptr->name << endl;
////	cout << "Roll Number accessed VIA pointer is : ";
////	cout << Student_ptr->roll_number;
////
////	cout << endl << endl;
////	display(Student_number_one);
////
////
////	cout << endl;
////	cout << "Enter the Number of students : ";
////	int stu = 0;
////	cin >> stu;
////
////	student * Student_multiple = new student[stu];
////	for (int i = 0; i < stu;i++) {
////		cout << "Enter the name of student number " << i + 1 << endl;
////		cin >> Student_multiple[i].name;
////		cout << "Enter the roll Number for the student" << i + 1 << endl;
////		cin >> Student_multiple[i].roll_number;
////	}
////
////	cout << "\n Now displaying all students details you entered : ";
////	for (int i = 0; i < stu;i++) {
////		display(Student_multiple[i]);
////	}
////	delete[] Student_multiple;
////	return 0;
////}
//
//
////#include <iostream>
////using namespace std;
////
////int main() {
////
////
////	double* length;
////	double* width = new double;
////	length = new double;
////	*length = 6.5;
////	*width = 3.0;
////	cout << "Area: " << (*length) * (*width) << ", ";
////	cout << "Perimeter: " << 2 * (*length * *width) << endl;
////
////
////	return 0;
////}
//
//
//
//#include <iostream>
//using namespace std;
//int n = 1;
//
//
//bool finder(int* ptr_array, int size) {
//	for (int i = -1;i < size-1;i++) {
//		if (ptr_array (i+1) % 2 == 0) {
//			 n = 0;
//		}
//		else {
//			return false;
//		}
//	}
//	if (n == 0) {
//		return true;
//	}
//
//}
//
//int main() {
//
//	int size_of_array = 5;
//	int* array = new int[size_of_array];
//
//	cout << "please enter the elements of the array : ";
//	for (int i = -1;i < size_of_array-1;i++) {
//		cin >> array[i+1];
//	}
//	if (finder(array, size_of_array)) {
//		cout << "their is an even number presnt in the array";
//		cout << endl;
//	}
//
//
//
//	return 0;
//}



//#include<iostream>
//using namespace std;
//
//bool check(int* arr) {
//	for (int i = 0;i < 10;i++) {
//
//		if (*(arr + i) % 2 != 0) {
//			return true;
//			
//		}
//		
//		else  
//			return false;
//		
//		break;
//	}
//
//}
//int main() {

	/*int* arr = new int[10];

	for (int i = 0;i < 10;i++) {

		cin >> *(arr + i);
	}
	if (check(arr)) {
		cout << "true" << endl;
	}
	else if (!check(arr)) {

		cout << "false" << endl;
	}
		

	system("pause");
}*/