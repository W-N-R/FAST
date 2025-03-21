#include <iostream>
#include <string>
using namespace std;

int calculations(int subscription_months) {

	int total = subscription_months * 50;
	return total;
}

int main() {

	int month;
	string input;
	cout << " Enter the month you want to subscribe :";
	cin >> month;


	if (month < 0) {
		cout << " invalid entry";
	}
	else {
		if (month < 6)
		{
			int Final_1 = calculations(month);
			
			cout << "Please insure weather you pay upfront or not. your answer must be in (yes) or (no) ";
			cin >> input;
			if (input == "yes" || input == "Yes") {
				int n = Final_1 * 5 / 100;
				int y = Final_1 - n;
				cout <<"You got 5% more discount now your total is : " <<  y << "$" << endl;
			}

			else {
				cout << Final_1 << endl;
			}
			exit(0);
		}


		else if (month <= 12) {

			int Final_2 = calculations(month);
			cout << "Total amount before discount is :" << Final_2;
			int tot = Final_2 * 1 / 10;
			int f = Final_2 - tot;
			cout << endl;
			cout << "Gross total is :" << f << "$";
			cout << endl;
			cout << "Please insure weather you pay upfront or not. your answer must be in (yes) or (no) ";
			cin >> input;
			if (input == "yes" || input == "Yes") {
				int n = f * 5 / 100;
				int y = f - n;
				cout << "You got 5% more discount now your total is : " << y << "$" << endl;
			}

			else  {
				cout << f << endl;

			}
			exit(0);
		}

		else  (month > 12); {

			int Final_2 = calculations(month);
			cout << "Total amount before discount is :" << Final_2;
			int tot = Final_2 * 1 / 20;
			int f = Final_2 - tot;
			cout << endl;
			cout << "Gross total is :" << f << "$";
			cout << endl;
			cout << "Please insure weather you pay upfront or not. your answer must be in (yes) or (no) ";
			cin >> input;
			if (input == "yes" || input == "Yes") {
				int n = f * 5 / 100;
				int y = f - n;
				cout << "You got 5% more discount now your total is : " << y << "$" << endl;
			}

			else  {
				cout << f << endl;
			}
			exit(0);
		}
	}
	return 0;

}
