//#include <iostream>
//using namespace std;
//
//
//void towerOfHanoi(int n, char source, char destination, char auxiliary) {
//
//    if (n == 1) {
//        cout << "Move disk 1 from " << source << " to " << destination << endl;
//        return;
//    }
//
//    towerOfHanoi(n - 1, source, auxiliary, destination);
//
//    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
//
//    towerOfHanoi(n - 1, auxiliary, destination, source);
//}
//
//int main() {
//    int numDisks;
//
//    cout << "Enter the number of disks: ";
//    cin >> numDisks;
//
//
//    towerOfHanoi(numDisks, 'A', 'C', 'B');
//
//    return 0;
//}