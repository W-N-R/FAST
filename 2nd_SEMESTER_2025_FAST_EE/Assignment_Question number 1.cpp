//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//
//using namespace std;
//
//
//void Display(int** x, int size) {
//    for (int i = 0; i < size; i++) {
//        cout << *x[i] << "  ";
//    }
//    cout << endl;
//}
//
//int main() {
//
//    int size, total_pos_count = 0, total_neg_Count = 0;
//
//    cout << "Enter the size of the array: ";
//    cin >> size;
//
//    int* main_array = new int[size];
//
//    	srand(time(0));
// 	
// 	for (int i = 0; i < size;i++) {
// 
// 		int random_num = rand() % 2001 - 1000;
// 
// 
// 		do {
// 
// 			main_array[i] = random_num;
// 
// 		} while (*main_array == 0);
// 	}
//
// 	cout << endl;
// 	cout << "So these are the random numbers" << endl;
// 	for (int i = 0; i < size;i++) {
// 
// 		cout << main_array[i]<<endl;
// 
// 	}
//    cout << endl;
//
//    for (int i = 0; i < size; i++) {
//        if (main_array[i] > 0) {
//            total_pos_count++;
//        }
//        else {
//            total_neg_Count++;
//        }
//    }
//
//   
//    int** positive_Array = new int* [total_pos_count];
//    int** negative_Array = new int* [total_neg_Count];
//
//    
//    int posIndex = 0, negIndex = 0;
//    for (int i = 0; i < size; i++) {
//        if (main_array[i] > 0) {
//            positive_Array[posIndex++] = &main_array[i];
//        }
//        else {
//            negative_Array[negIndex++] = &main_array[i];
//        }
//    }
//
//    
//    cout << "Array of Positive numbers: ";
//    Display(positive_Array, total_pos_count);
//
//    
//    cout << "Array of Negative numbers: ";
//    Display(negative_Array, total_neg_Count);
//
//    
//    delete[]  main_array;
//    delete[]  positive_Array;
//    delete[]  negative_Array;
//
//    return 0;
//}
