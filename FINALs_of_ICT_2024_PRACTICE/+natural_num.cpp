//#include <iostream>
//using namespace std;
//
//int wnr;
//int sum(int lower, int upper) {
//
//	for (int i = lower; i <= upper; i++) {
//		if (lower > upper) {
//			return 0;
//		}
//		wnr = lower + (lower + 1);
//	}
//	return wnr;
//}
//int main() {
//	int lower, upper;
//	cin >> lower;
//	cin >> upper;
//	sum(lower, upper);
//	cout << wnr;
//	return 0;
//}

//
//#include <iostream>
//using namespace std;
//
//int sum(int lower, int upper) {
//    if (lower > upper) {
//        return 0; // Base case: if lower is greater than upper, return 0
//    }
//    return lower + sum(lower + 1, upper); // Recursive case
//}
//
//int main() {
//    int lower, upper;
//    cout << "Enter lower and upper bounds: ";
//    cin >> lower >> upper;
//    int result = sum(lower, upper);
//    cout << "The sum is: " << result << endl;
//    return 0;
//}
