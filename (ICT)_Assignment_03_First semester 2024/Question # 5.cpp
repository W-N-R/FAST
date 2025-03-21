//#include <iostream>
//using namespace std;
//
//const int small = 9, medium = 12 , large = 15;
//const double small_$ = 1.75, medium_$ = 1.90, large_$ = 2.00;
//
//// to show how to use the programme function is :
//
//void instructions() {
//	cout << "***********************************************************" << endl;
//	cout << "********************JASON_COFFEE_SHOPE*********************" << endl;
//	cout << "***********************************************************" << endl;
//	cout << endl;
//	cout << "=> Buy Coffee in any size (small_cup, medium_cup, large_cup)"<<endl;
//	cout << "=> Total number of cups of each size sold."<<endl;
//	cout << "=> Total amount of coffee sold." << endl;
//	cout << "=> Show the total money made." << endl;
//}
//
//
//void sellCoffee(int& smallCount, int& mediumCount, int& largeCount, double& totalMoney) {
//    int size, quantity;
//    cout << "Enter coffee size (1 for Small, 2 for Medium, 3 for Large): ";
//    cin >> size;
//    cout << "Enter quantity: ";
//    cin >> quantity;
//
//    switch (size) {
//    case 1:
//        smallCount += quantity;
//        totalMoney += small_$ * quantity;
//        break;
//    case 2:
//        mediumCount += quantity;
//        totalMoney += medium_$ * quantity;
//        break;
//    case 3:
//        largeCount += quantity;
//        totalMoney += large_$ * quantity;
//        break;
//    default:
//        cout << "Invalid size!" << endl;
//    }
//}
//
//void showCupsSold(int smallCount, int mediumCount, int largeCount) {
//    cout << "Cups Sold: " << endl;
//    cout << "Small: " << smallCount << endl;
//    cout << "Medium: " << mediumCount << endl;
//    cout << "Large: " << largeCount << endl;
//}
//
//void showTotalCoffeeSold(int smallCount, int mediumCount, int largeCount) {
//    int totalCups = smallCount + mediumCount + largeCount;
//    cout << "Total Coffee Sold: " << totalCups << " cups" << endl;
//}
//
//void showTotalMoneyMade(double totalMoney) {
//    cout << "Total Money Made: $" << totalMoney << endl;
//}
//
//int main() {
//    int smallCount = 0, mediumCount = 0, largeCount = 0;
//    double totalMoney = 0.0;
//    int choice;
//
//    while (true) {
//        instructions();
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            sellCoffee(smallCount, mediumCount, largeCount, totalMoney);
//            break;
//        case 2:
//            showCupsSold(smallCount, mediumCount, largeCount);
//            break;
//        case 3:
//            showTotalCoffeeSold(smallCount, mediumCount, largeCount);
//            break;
//        case 4:
//            showTotalMoneyMade(totalMoney);
//            break;
//        case 5:
//            cout << "Thank you for visiting!" << endl;
//            return 0;
//        default:
//            cout << "Invalid choice!" << endl;
//        }
//    }
//}
