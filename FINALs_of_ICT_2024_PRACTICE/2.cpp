////A car rental company charges $40 per day to rent a car. If the rental period is more than 7
////days, the customer gets a 10 % discount on the total cost.If the customer rents more than
////3 cars, they receive an additional 5 % discount.Write a program to calculate the cost
////before the discount, the discount amount, and the final cost after all applicable discounts.
//
//
//# include < iostream >
//# include < cmath >
//# include < string >
//# include < limits >
//
//
//using namespace std;
//
//int days_dis=0,total_day_dis=0,cars_dis=0, total=0;
//
//int main()
//{
//	int days = 0, num_cars = 0;
//
//	while (true) {
//		
//		cout << " Enter a positive integer which represents days you want to rent a car :";
//		cin >> days;
//		cout << endl;
//		cout << " Enter a positive integer which represents the number of cars you want to rent :";
//		cin >> num_cars;
//		cout << endl;
//		if (cin.fail() || days <=0 || num_cars <= 0) {
//			cin.clear();
//			cin.ignore();
//			cout << "Invalid Input Please Enter a valid Input" << endl;
//		}
//		else {
//			break;
//		}				
//	}
//
//
//	int base_cost = (days * 40) * num_cars;
//	cout << "Total cost Before discount is :" << base_cost << endl;
//	{
//		if (days <= 7 && num_cars <= 3) {
//			cout << "Total cost Before discount is :" << base_cost << endl;
//		}
//		
//		if (days > 7 && num_cars > 3) {
//			days_dis = base_cost * 1 / 10;
//			total_day_dis = base_cost - days_dis;
//
//			cars_dis = base_cost * 5 / 100;
//			total = total_day_dis - cars_dis;
//		}
//		
//	
//		if(days > 7 ) {
//			days_dis = base_cost * 1 / 10;
//			total_day_dis = base_cost - days_dis;
//			total = total_day_dis;
//		}
//		else {
//			total = base_cost;
//		}
//	    if ( num_cars > 3) {
//			cars_dis = base_cost * 5 / 100;
//			total = base_cost - cars_dis;
//		}
//		else {
//			total = base_cost;
//		}
//	}
//	cout << "total discount you get is : " << days_dis + cars_dis<<endl;
//	cout << "Total amount : " << total;
//	return 0;
//
//}
