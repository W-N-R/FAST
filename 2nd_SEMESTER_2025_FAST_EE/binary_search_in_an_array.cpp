//#include <iostream>
//using namespace std;
//
//void binary_search(int array[], int size_of_array, int search_element) {
//	int start = 0;
//	int end = size_of_array - 1;
//	int mid = (start + end) / 2;
//	while (start <= end) {
//		if (array[mid] == search_element) {
//			cout << "Element found at index " << mid;
//			break;
//		}
//		else if (array[mid] < search_element) {
//			start = mid + 1;
//		}
//		else {
//			end = mid - 1;
//		}
//		mid = (start + end) / 2;
//	}
//	if (start > end) {
//		cout << "Element not found";
//	}
//}
//int main() {
//	int array[10];
//	cout << "enter the number of array elements:";
//	for (int i = 0; i < 10; i++) {
//		cin >> array[i];
//	}
//	int search;
//	cout << "Enter the number you want to search:";
//	cin >> search;
//	binary_search(array, 10, search);
//	return 0;
//}
////
//// 
//// 
//// 
//// 
//// 
////int binary_search(int arr[], int size, int search) {
////	int start = 0;
////	int end = size;
////	while (start <= end) {
////
////		int mid = (start + end) / 2;
////
////		if (arr[mid] == search) {
////			return mid;
////		}
////		else if (arr[mid] > search) {
////			end = mid - 1;
////		}
////		else {
////			end = mid + 1;
////		}
////	}
////	return -1;
////}
////int main() {
////	int array[10];
////	cout << "enter the number of array elements:";
////	for (int i = 0; i < 10; i++) {
////		cin >> array[i];
////	}
////
////	int search;
////	cout << "Enter the number you want to search:";
////	cin >> search;
////	int index = binary_search(array, 10, search);
////	if (index == -1) {
////		cout << "Element not found";
////	}
////	else {
////		cout << "Element found at index " << index;
////	}
////
////
////	return 0;
////}