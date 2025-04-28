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
//
//
//Employee::~Employee()
//{
//cout<<"Destructor called<<endl";								
//}
//#endif
//
//
//
//
//
