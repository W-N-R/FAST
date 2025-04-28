//#include <iostream>
//using namespace std;
//
//void Encrypted(char parr[], int key) {
//	for (int i = 0;i < 20;i++) {
//		parr[i] += key;
//	}
//	for (int i = 0;i < 20;i++) {
//		cout << parr[i];
//	}
//}
//void decrypted (char parr[], int key) {
//	for (int i = 0;i < 20;i++) {
//		parr[i] -= key;
//	}
//	for (int i = 0;i < 20;i++) {
//		cout << parr[i];
//	}
//}
//int main() {
//	int key;
//	char array[20];
//	cout << "please Enter the elements of array:";
//	cin.getline(array,20);
//	cout << endl;
//	cout << "enter the key(1-10):";
//	cin >> key;
//	cout << endl;
//	cout << "so the encrypted word is:";
//	Encrypted(array, key);
//	cout << endl << endl;
//	cout << "enter th key to decrypted the word";
//	int key1 = 0;
//	cin >> key1;
//	cout << "the decrypted word is:";
//	decrypted(array, key);
//
//	return 0;
//}