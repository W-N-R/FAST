////A grocery store offers discounts based on the total weight of items purchased.For
////purchases over 10 kg, there is a 10 % discount.For more than 20 kg, the discount is 20 %,
////and for more than 30 kg, it is 30 % .If the purchase amount exceeds $200, there is an
////additional 5 % discount.Write a program to compute the total cost before and after the
////discount.
//
//#include <iostream>
//using namespace std;
//
//double purchase_weight = 0, purchase_cost_dis = 0;
//
//void  total_cost(double weight,double cost) {
//
//	if (weight < 10 && cost < 200) {
//		cout << "The Total cost before discount is : " << cost << endl;
//		cout << "You did not get any discount" << endl;
//		cout << "So final cost is : " << cost << endl;
//	}
//	if (weight < 10 && cost > 200) {
//		double n = cost * 5 / 100;
//		purchase_cost_dis = cost - n;
//		cout << "The Total cost before discount is : " << cost << endl;
//		cout << "You get additional discount of 5%  (CONGRAGULATIONS!!!)" << endl;
//		cout << "So final cost is : " << purchase_cost_dis << endl;
//	}
//	if (weight > 10 && cost < 200) {
//		double n = cost * 1 / 10;
//		purchase_cost_dis = cost - n;
//		cout << "The Total cost before discount is : " << cost << endl;
//		cout << "You get discount of 10% of shoping above 10kg  (CONGRAGULATIONS!!!)" << endl;
//		cout << "So final cost is : " << purchase_cost_dis << endl;
//	}
//	if (weight > 10 && weight < 20 && cost > 200) {
//		double n = cost * 5 / 100;
//		purchase_cost_dis = cost - n;
//		double m = cost * 1 / 10;
//		purchase_weight = purchase_cost_dis - m;
//		cout << "The Total cost before discount is : " << cost << endl;
//		cout << "You get additional discount of 5% for more then 200$ of shoping and 10% for shoping above 10kg weight (CONGRAGULATIONS!!!)" << endl;
//		cout << "So final cost is : " << purchase_weight << endl;
//	}
//	if (weight > 20 && cost < 200) {
//		double n = cost * 2 / 10;
//		purchase_cost_dis = cost - n;
//		cout << "The Total cost before discount is : " << cost << endl;
//		cout << "You get discount of 20% of shoping above 20kg  (CONGRAGULATIONS!!!)" << endl;
//		cout << "So final cost is : " << purchase_cost_dis << endl;
//	}
//	if (weight > 20 && weight < 30 && cost > 200) {
//		double n = cost * 5 / 100;
//		purchase_cost_dis = cost - n;
//		double m = cost * 2 / 10;
//		purchase_weight = purchase_cost_dis - m;
//		cout << "The Total cost before discount is : " << cost << endl;
//		cout << "You get additional discount of 5% for more then 200$ of shoping and 20% for shoping above 20kg weight (CONGRAGULATIONS!!!)" << endl;
//		cout << "So final cost is : " << purchase_weight << endl;
//	}
//	if (weight > 30 && cost < 200) {
//		double n = cost * 3 / 10;
//		purchase_cost_dis = cost - n;
//		cout << "The Total cost before discount is : " << cost << endl;
//		cout << "You get discount of 30% of shoping above 30kg  (CONGRAGULATIONS!!!)" << endl;
//		cout << "So final cost is : " << purchase_cost_dis << endl;
//	}
//	if (weight > 30 && cost > 200) {
//		double n = cost * 5 / 100;
//		purchase_cost_dis = cost - n;
//		double m = cost * 3 / 10;
//		purchase_weight = purchase_cost_dis - m;
//		cout << "The Total cost before discount is : " << cost << endl;
//		cout << "You get additional discount of 5% for more then 200$ of shoping and 30% for shoping above 30kg weight (CONGRAGULATIONS!!!)" << endl;
//		cout << "So final cost is : " << purchase_weight << endl;
//	}
//
//}
//int main() {
//	double weight, cost;
//	cout << " Enter The weight of your total purchase : ";
//	cin >> weight;
//	cout << endl;
//	cout << " Enter the cost of your total purchase : ";
//	cin >> cost;
//	cout << endl;
//	total_cost(weight, cost);
//	return 0;
//}