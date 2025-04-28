////Write a program which declares a 2 - dimensional integer array with 3 rows and 4 columns.Write
////a function called GetData which populates this array with integers typed in by the user.Write
////another function called PrintMaximumValueInRow which outputs the maximum values present
////in each row.
////For example if the array gets populated with the following data :
////7 11 9 8
////4 22 6 3
////1 2 3 4
////Your output would be :
////11
////22
////4
//#include <iostream>	
//using namespace std;
//void GetData(int array[3][4]) {
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			cin >> array[i][j];
//		}
//	}
//}
//void PrintMaximumValueInRow(int array[3][4]) {
//	for (int i = 0; i < 3; i++) {
//		int max = array[i][0];
//		for (int j = 0; j < 4; j++) {
//			if (array[i][j] > max) {
//				max = array[i][j];
//			}
//		}
//		cout << max << endl;
//	}
//}
//int main() {
//	int array[3][4];
//	GetData(array);
//	PrintMaximumValueInRow(array);
//	return 0;
//}




//aliha.tanveer@lhr.nu.edu.pk