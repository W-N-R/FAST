//#include <iostream>
//using namespace std;
//
//// Function to resize the array
//void resize(int*& arr, int size, int new_size) {
//	// Allocate new memory for the resized array
//	int* newArr = new int[new_size];
//
//	// Copy old elements into the new array up to the minimum size
//	for (int i = 0; i < min(size, new_size); i++) {
//		newArr[i] = arr[i];
//	}
//
//	// If new size is greater, fill extra spaces with 0
//	for (int i = size; i < new_size; i++) {
//		newArr[i] = 0;
//	}
//
//	// Delete old array to prevent memory leak
//	delete[] arr;
//
//	// Update pointer to point to the new resized array
//	arr = newArr;
//}
//int main() {
//	//int num1 = 10,num2=9;
//	//int* p;
//	//int* p2;
//	//p = &num1;
//	//p2 = &num2;
//	//cout << *p;
//	//cout << endl;
//	//cout << endl;
//	//num2 = num1 - *p2;
//	//cout << num2;
//	//cout << endl;
//	//int int1 = 26;
//	//int int2 = 45;
//	//int* int1Ptr = &int1;
//	//int* int2Ptr = &int2;
//	//*int1Ptr = 89;
//	//*int2Ptr = 62;
//	//int1Ptr = int2Ptr;
//	//*int1Ptr = 80;
//	//int1 = 57;
//	//cout << int1 << " " << int2 << endl;
//	//cout << *int1Ptr << " " << *int2Ptr << endl;
//	//cout << endl;
//	//cout << endl;
//	//cout << endl;
//
//	//int num;
//	//int* numPtr=&num;
//	//cout << numPtr;
//	//cout << endl;
//	//*numPtr = 1;
//	//cout << *numPtr;
//	//cout << endl;
//	//num = 7;
//	//num = num + *numPtr;
//	//cout << num;
//	//cout << endl;
//	//string str1 = "sunny";
//	//string str2 = "cloudy";
//	//string* s1;
//	//cout << str1 << " " << str2 << endl;
//	//s1 = &str1;
//	////cout << *s1 << " " << str2 << endl;
//	//str1 = str2;
//	//str2 = *s1;
//	//cout << str1 << " " << str2 << endl;
//
//
//		//int* speed = new int;    // Line 1
//		//double* travelTime;      // Line 2
//		//double* distance;        // Line 3
//
//		//speed = new int;         // Allocate memory
//		//travelTime = new double; // Allocate memory
//		//distance = new double;   // Allocate memory
//
//		//*speed = 65;             // Line 4 (Fixed)
//		//*travelTime = 8.5;       // Line 5
//
//		//*distance = (*speed) * (*travelTime); // Line 7
//
//		//cout << *distance << endl; // Line 8
//
//		//// Free allocated memory
//		//delete speed;
//		//delete travelTime;
//		//delete distance;
//
//	/*int size , small  , nsize=0;*/
//	
//
//	/*float * temp;
//	int nsize;
//	cin >> nsize;
//	temp = new float[nsize];
//	for (int i = 0;i < nsize;i++) {
//		
//		cout << temp;
//	}
// 
//
//
//	int** _2DArray;
//	int rows;
//
//	cin >> rows;
//	_2DArray = new int* [rows];
//	for (int i = 0; i < rows; i++)
//		_2DArray[i] = new int[i + 1];
//
//	for (int i = 0; i < rows; i++)
//		for (int k = 0; k < i + 1; k++)
//			_2DArray[i][k] = i + k;
//
//	for (int i = 0; i < rows; i++)
//	{
//		for (int k = 0; k < i + 1; k++)
//			cout << _2DArray[i][k] << " ";
//		cout << endl;
//	}
//	for (int i = 0; i < rows; i++)
//		delete[] _2DArray[i];
//	delete[] _2DArray;
//
//	int* intList;
//	intList = new int[5];
//	for (int i = 0; i < 5; i++)
//		cin >> intList[i];
//	for (int i = 4; i > 0; i--)
//		intList[i] = intList[i] + intList[i - 1];
//	int sum = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << intList[i] << " ";
//		sum = sum + intList[i];
//	}
//	cout << endl << "Sum = " << sum << endl;
//*/
//
//
//
//	int** _2DArray;
//	int rows;
//
//	cin >> rows;
//	_2DArray = new int* [rows];
//	for (int i = 0; i < rows; i++)
//		_2DArray[i] = new int[i + 1];
//
//	for (int i = 0; i < rows; i++)
//		for (int k = 0; k < i + 1; k++)
//			_2DArray[i][k] = i + k;
//
//	for (int i = 0; i < rows; i++)
//	{
//		for (int k = 0; k < i + 1; k++)
//			cout << _2DArray[i][k] << " ";
//		cout << endl;
//	}
//	for (int i = 0; i < rows; i++)
//		delete[] _2DArray[i];
//	delete[] _2DArray;
//	_2DArray = nullptr;	
//
//
//
//
//
//	
//		int size = 5;
//		int* arr = new int[size] {2, 32, 4, 34, 51};
//
//		cout << "Before resizing: ";
//		for (int i = 0; i < size; i++) {
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//
//		// Resize the array (Example: Increasing size to 7)
//		int new_size = 7;
//		resize(arr, size, new_size);
//
//		cout << "After resizing: ";
//		for (int i = 0; i < new_size; i++) {
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//
//		// Cleanup memory
//		delete[] arr;
//
//		
//
//
//	return 0;
//}