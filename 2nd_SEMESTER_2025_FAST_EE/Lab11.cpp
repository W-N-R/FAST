////
////#include <iostream>
////#include <string>
////using namespace std;
////
////class employee {
////protected:
////    string employee_id;
////    double base_salary;
////public:
////    employee(string id, double salary) : employee_id(id), base_salary(salary) {}
////    virtual double  compute_salary() = 0;
////    virtual ~employee(){}
////};
////
////class commission_worker : public employee {
////private:
////    double monthly_sales;
////    double commission_rate;
////public :
////    commission_worker(string, double, double, double);
////    double compute_salary() {
////        return base_salary + (monthly_sales * commission_rate / 100);
////    }
////};
////
////commission_worker::commission_worker(string idd, double salary, double sales, double rate) : employee(employee_id = idd, base_salary = salary), monthly_sales(sales), commission_rate(rate) {}
////
////class hourly_worker : public employee {
////    double hours;
////    double per_hour;
////public:
////    hourly_worker(string, double, double, double);
////    double compute_salary() {
////        return base_salary + (hours + per_hour);
////    }
////};
////hourly_worker::hourly_worker(string id, double salary, double hours, double perhour ):
////    employee (id , salary ), hours(hours), per_hour(perhour){ }
////
////class salaried_worker : public employee {
////    double bonus;
////public :
////    salaried_worker(string, double, double);
////    double compute_salary() {
////        return base_salary + bonus;
////    }
////};
////
////salaried_worker::salaried_worker(string id, double base, double bonu) :employee(id, base), bonus(bonu){}
////
////
////
////int main() {
////    commission_worker john("waleed9119", 6000, 2000, 15);
////    commission_worker* john_ptr = &john;
////    cout << "John's Salary (Direct): $" << john_ptr->compute_salary() << endl;
////
////    employee* base_ptr = &john;
////    cout << "John's Salary (Via Base Pointer): $" << base_ptr->compute_salary() << endl;
////
////    commission_worker alice("iwiw", 6000, 3000, 12);
////    commission_worker bob("103", 6000, 4000, 10);
////    hourly_worker clara("104", 6000, 20, 120);
////    hourly_worker dan("105", 6000, 15, 110);
////    salaried_worker emma("106", 6000, 1500);
////    salaried_worker frank("107", 6000, 2500);
////
////    employee* all_employees[6] = { &alice, &bob, &clara, &dan, &emma, &frank };
////
////    cout << "\n--- Monthly Payroll Summary ---\n";
////    for (int i = 0; i < 6; ++i) {
////        cout << "Employee #" << (i + 1) << " Total Pay: $" << all_employees[i]->compute_salary() << endl;
////    }
////
////    return 0;
////}
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class carinfo {
//    string make, model;
//    int price;
//public:
//    carinfo();
//    carinfo(string m, string mdl, int p);
//    string getmake();
//    string getmodel();
//    int getprice();
//    void show();
//};
//
//
//class date {
//    int day, month, year;
//public:
//    date();
//    date(int d, int m, int y);
//    int getday();
//    int getmonth();
//    int getyear();
//    void showdate();
//};
//
//class car {
//    carinfo info;
//    date dom;
//public:
//    car();
//    car(carinfo i, date d);
//    carinfo getinfo();
//    date getdate();
//};
//
//carinfo::carinfo() {}
//carinfo::carinfo(string m, string mdl, int p) {
//    make = m;
//    model = mdl;
//    price = p;
//}
//string carinfo::getmake() {
//    return make;
//}
//string carinfo::getmodel() {
//    return model;
//}
//int carinfo::getprice() {
//    return price;
//}
//
//void carinfo::show() {
//    cout << "-------------------------------------------------" << endl;
//    cout << "Make: " << make << "\nModel: " << model << "\nPrice: " << price << endl;
//}
//
//
//
//date::date() {}
//date::date(int d, int m, int y) {
//    day = d;
//    month = m;
//    year = y;
//}
//int date::getday() {
//    return day;
//}
//int date::getmonth() {
//    return month;
//}
//int date::getyear() {
//    return year;
//}
//
//void date::showdate() {
//    cout << "-------------------------------------------------" << endl;
//    cout << "Date: " << day << "-" << month << "-" << year << endl;
//}
//
//
//car::car() {}
//car::car(carinfo i, date d) {
//    info = i;
//    dom = d;
//}
//carinfo car::getinfo() {
//    return info;
//}
//date car::getdate() {
//    return dom;
//}
//
//
//int main() {
//    carinfo d("Honda", "LEX", 2500);
//    cout << "---------------------------------------------------------------------------------------" << endl;
//    cout << "Name: " << d.getmake() << " \nModel: " << d.getmodel() << " \nPrice: $" << d.getprice() << endl;
//    cout << "-------------------------------------------------" << endl;
//    d.show();
//    date c(23, 12, 2018);
//    cout << "-------------------------------------------------" << endl;
//    cout << "Date: " << c.getday() << "-" << c.getmonth() << "-" << c.getyear() << endl;
//    cout << "-------------------------------------------------" << endl;
//    c.showdate();
//
//    car a(d, c);
//    cout << "---------------------------------------------------------------------------------------" << endl;
//    cout << "Info: \nMake: " << a.getinfo().getmake() << "\nModel: " << a.getinfo().getmodel() << "\nPrice: " << a.getinfo().getprice() << "\nDate: " << a.getdate().getday() << "-" << a.getdate().getmonth() << "-" << a.getdate().getyear() << endl;
//    cout << "-------------------------------------------------" << endl;
//    a.getinfo().show();
//    cout << "-------------------------------------------------" << endl;
//    a.getdate().showdate();
//    cout << "-------------------------------------------------" << endl;
//
//    return 0;
//}

//
//#include <iostream>
//
//using namespace std;
//template <class t1, class t2>
//class list {
//	t1 num;
//	t2 num2;
//public:
//	list() {}
//	template <class t, class t2>
//	list(t1 nom, t2 num): num (nom), num2(num){}
//	list print();
//};
//template <class t1, class t2>
//list <t1, t2>:: list (){
//
//}