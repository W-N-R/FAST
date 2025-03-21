//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//// Function to convert binary to decimal
//int decimalConverter(int binaryNumber) {
//    int decimal = 0;
//    int power = 0;
//
//    while (binaryNumber > 0) {
//        int digit = binaryNumber % 10;
//        if (digit != 0 && digit != 1) {
//            return -1; // Indicate an error for invalid input
//        }
//        decimal += digit * pow(2, power);
//        binaryNumber /= 10;
//        power++;
//    }
//    return decimal;
//}
//
//int main() {
//    int binaryNumber;
//
//    cout << "Enter a binary number: ";
//    cin >> binaryNumber;
//
//    int decimal = decimalConverter(binaryNumber);
//
//    if (decimal != -1) {
//        cout << "Decimal equivalent: " << decimal << endl;
//    }
//    else {
//        cout << "Conversion not possible: it is not a binary number" << endl;
//    }
//
//    return 0;
//}