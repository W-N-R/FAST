//	//1. Ek algorithm likhein jo equilibrium index ki talash kare.
//	//2. Algorithm ko implement karein aur test karein.
//
//
//#include <iostream>
//using namespace std;
//
//int equilibrium_index(int parr[], int size) {
//	int sum = 0;
//	int left_sum = 0;
//	for (int i = 0; i < size; i++) {
//		sum += parr[i];
//	}
//	for (int i = 0; i < size; i++) {
//		sum -= parr[i];
//		if (left_sum == sum) {
//			return i;
//		}
//		left_sum += parr[i];
//	}
//	return -1;
//}
//
//int main() {
//	int arr[5];
//	for (int i = 0; i < 5; i++) {
//		cout << "Enter the value of element " << i << " : ";
//		cin >> arr[i];
//	}
//	cout << "The equilibrium index is at index " << equilibrium_index(arr, 5) << endl;
//	return 0;
//}
