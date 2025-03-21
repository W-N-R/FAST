////Write a C++ program that calculates how much money a person would accumulate in a
////bank account over a period of time if the initial deposit is $1 and the amount doubles
////every day.The program should ask the user for the number of days.Display a table
////showing the balance for each day and the total amount at the end of the period
//
//#include <iostream>
//using namespace std;
//int n = 0;
//int initial_deposit = 1,w;
//void money_cal(int num_days) {
//
//	while (num_days != 0) {
//
//		n = n + 1;
//		cout << "number of days you accumulated your money is : " << n << endl<<endl;
//		cout << "The balance amount in your account is : ";
//		initial_deposit = initial_deposit * 2;
//		w += initial_deposit;
//		cout << initial_deposit<<endl;
//		cout << endl;
//		num_days--;
//	}
//	cout << "Total is : " << w << endl;
//}
//int main() {
//
//	int days;
//	cout << "Enter the number of days : ";
//	cin >> days;
//	cout << endl;
//
//	money_cal(days);
//	return 0;
//}