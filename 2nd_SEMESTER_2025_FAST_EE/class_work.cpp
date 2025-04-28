//#include <iostream>
//using namespace std;
//
//void memory_allocation(int**& parr, int size) {
//	*parr = new int(size);
//	for (int i = 0;i < size;i++) {
//		parr[i] = new int[i + 1];
//	}
//}
//int main() {
//	int** _2DArray;	int rows;
//
//	cin >> rows;
//	memory_allocation(_2DArray, rows);
//
//	for (int i = 0; i < rows; i++)
//		for (int k = 0; k < i + 1; k++)
//			_2DArray[i][k] = i + k;
//
//	for (int i = 0; i < rows; i++)
//	{
//		for (int k = 0; k < i + 1; k++)
//			cout << _2DArray[i][k] << " ";
//		cout << endl;
//	}
//	for (int i = 0; i < rows; i++)
//		delete[] _2DArray[i];
//	delete[] _2DArray;
//
//	int* intList;
//	intList = new int[5];
//	for (int i = 0; i < 5; i++)
//		cin >> intList[i];
//	for (int i = 4; i > 0; i--)
//		intList[i] = intList[i] + intList[i - 1];
//	int sum = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << intList[i] << " ";
//		sum = sum + intList[i];
//	}
//	cout << endl << "Sum = " << sum << endl;
//	
//
//
//
//	return 0;
//}

//
//#include <iostream>
//using namespace std;
//class myclass{
//int a, b;
//public:
//friend int sum(myclass x);
//void set_ab(int i, int j);
//};
//void myclass::set_ab(int i, int j) {
//	a = i;
//	b = j;
//}
//int sum(myclass x) {
//	return x.a + x.b;
//}
//int main() {
//	myclass n;
//	n.set_ab(3, 4);
//	cout << sum(n);
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS // If you want to suppress the warning
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//class Student {
//private:
//    char* name;
//    int rollNo;
//    double* marks;
//    int numSubjects;
//    double percentage;
//
//public:
//    Student(const char* studentName, int roll, int subjects) {
//        rollNo = roll;
//        numSubjects = subjects;
//        percentage = 0.0;
//
//        // Allocate memory for name
//        name = new char[strlen(studentName) + 1];
//
//        // Use safe string copy
//        strcpy_s(name, strlen(studentName) + 1, studentName);
//
//        // Allocate memory for marks array
//        marks = new double[numSubjects];
//
//        // Input marks from user
//        cout << "Enter marks for " << numSubjects << " subjects: ";
//        for (int i = 0; i < numSubjects; i++) {
//            cin >> marks[i];
//        }
//    }
//
//    ~Student() {
//        delete[] name;
//        delete[] marks;
//    }
//};
//
//int main() {
//    char name[50];
//    int rollNo, subjects;
//
//    cout << "Enter student name: ";
//    cin.getline(name, 50);
//    cout << "Enter roll number: ";
//    cin >> rollNo;
//    cout << "Enter number of subjects: ";
//    cin >> subjects;
//
//    Student student(name, rollNo, subjects);
//    return 0;




//#ifndef wnr
//#define  wnr
//
//
//#include <iostream>
//#include <string>
//
//
//using namespace std;
//
//class Employee {
//private:
//	int ID;
//	string name;
//	double salary;
//	string department;
//public:
//	Employee();
//	Employee( int ID, string name, double salary, string department);
//	Employee (Employee & emp);
//	int getID ();
//	void setID (int);
//	string getname ();
//	void setname (string);
//	double getsalary ();
//	void setsalary (double);
//	string getdepartment();
//	void setdepartment (string);
//	~Employee ();
//
//};
//
//Employee::Employee()
//{
//ID=0;
//name="";
//salary=0;
//department=" ";
//cout<<"Default contructor called";
//}
//Employee::Employee( int ID, string name, double salary, string department){
//ID=ID;
//name=name;
//salary=salary;
//department=department;
//cout<<"parametraized contructor called"<<endl;
//}
//
//Employee :: Employee ( Employee& emp){
//cout <<"copy constructor called "<<endl;
//this-> ID= emp.ID ;
//this-> name=emp.name;
//this-> salary= emp.salary;
//this-> department=emp.department;
//}
//
//int Employee::getid()
//
//{
//return rollnumber;
//}
//void Employee::Employee(int r)
//{
//rollnumber=r;
//}
//
//
//Employee::~Employee()
//{
//cout<<"Destructor called<<endl";								
//}
//#endif

//
//#include <iostream>
//using namespace std;
//
//class swimming_pool
//{
//private:
//	double length;
//	double width, height;
//	double filling_rate, draining_rate;
//
//public:
//	//swimming_pool();
//	swimming_pool(double, double, double, double, double);
//	swimming_pool(const swimming_pool& depth);
//	swimming_pool(double = 1.3, double = 32.23);
//	friend void no_one(int, double);
//	void print();
//
//};
//void swimming_pool::print()
//{
//	cout << length << endl;
//	cout << width << endl;
//	cout << height << endl;
//	cout << filling_rate << endl;
//}
//
//
//swimming_pool::swimming_pool(double len, double wid)
//{
//	length = len;
//	width = wid;
//}
//
//
//swimming_pool::swimming_pool(double length, double width, double height, double filling_rate, double draining_rate)
//{
//	this->length = length;
//	this->width = width;
//	this->height = height;
//	this->filling_rate = filling_rate;
//	this->draining_rate = draining_rate;
//
//}
//
//
//int main()
//{
//	swimming_pool azher;
//	azher.print();
//	double length = 9.6, width = 3.5, height = 42.32, filling_rate = 7.0, draining_rate = 8.4;
//	cout << "Enter the lenght of the swimmign pool: ";
//	cin >> length;
//	cout << "Enter the width of the swimming pool: ";
//	cin >> width;
//	cout << "Enter the height of the pool: ";
//	cin >> height;
//	cout << "Enter the filling_rate: ";
//	cin >> filling_rate;
//	cout << "Enter the draining rate of the pool: ";
//	cin >> draining_rate;
//
//	swimming_pool my_home(length, width, height, filling_rate, draining_rate);
//	my_home.print();
//	return 0;
//}




// classes kay darmiyan do tarhan ka relation hota hay :
//1-> aggregation , 2-> composition (has a) 
// Inheritence (is a)
/*
class Date {
Private:
 int day;
 int month;
 int year;

 Public:
 contructor 
 distructor
 getter setter
 };

*/