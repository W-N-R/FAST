////2. Write a C++ function, smallestIndex, that takes as parameters an
////int array and its size and returns the index of the first occurrence of the
////smallest element in the array.Also, write a program to test your function.
//
//#include <iostream> 
//using namespace std;
//
//void smallest_index(int parr[], int size) {
//	int min = parr[0];
//	int index = 0;
//	for (int i = 0; i < size; i++) {
//		if (parr[i] < min) {
//			min = parr[i];
//			index = i;
//		}
//	}
//	cout << "The smallest element is at index " << index << endl;
//
//}
//int main() {
//	int arr[5];
//	for (int i = 0; i < 5; i++) {
//		cout << "Enter the value of element " << i << " : ";
//		cin >> arr[i];
//	}
//	smallest_index(arr, 5);
//	return 0;
//}