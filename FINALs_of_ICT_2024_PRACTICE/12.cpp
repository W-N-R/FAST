////Write a C++ program that calculates how much money an investor would accumulate
////over a period of time if the initial investment is $10 and it increases by 5 % daily.The
////program should ask the user for the number of days.Display a table showing the
////investment value for each day and the total amount at the end of the period.
//
//
//
//#include <iostream>
//using namespace std;
//double investment = 10;
//double total = 0;
//double n = 0,w;
//void calculations(double days) {
//	while (days != 0) {
//		n = n + 1;
//		w = investment * 5 / 100;
//		investment +=  w;
//		cout << "investment value for day " << n << " is :" << investment << endl;
//		total += investment;
//		
//		days--;
//	}
//	cout << "So the total amount so far you have is :" << total << endl;
//}
//int main() {
//	int days;
//	cout << "Please Enter The number of days : "<<endl;
//	cin >> days;
//	calculations(days);
//
//	return 0;
//}