////3. Write a C++ function, lastLargestIndex, that takes as parameters an
////int array and its size and returns the index of the last occurrence of the
////largest element in the array.Also, write a program to test your function.
//
//#include <iostream>
//using namespace std;
//
//void largest_index(int parr[], int size) {
//	int max = parr[0];
//	int index = 0;
//	for (int i = 0; i < size; i++) {
//		if (parr[i] > max) {
//			max = parr[i];
//			index = i;
//		}
//	}
//	cout << "The largest element is at index " << index << endl;
//
//}
//
//int main() {
//	int arr[5];
//	for (int i = 0; i < 5; i++) {
//		cout << "Enter the value of element " << i << " : ";
//		cin >> arr[i];
//	}
//	largest_index(arr, 5);
//	return 0;
//}