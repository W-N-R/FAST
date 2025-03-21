//#include <iostream>
//using namespace std;
//
////x > y > z
//float x, y, z,WNR=0, wnr = 0;
//void sort3_desc(float x, float y, float z) {
//	if (x < y && y < z) {
//		wnr = x;
//		x = z;
//		z = wnr;
//	}
//	if (y < x && x < z) {
//		wnr = x;
//		x = z;
//		WNR = y;
//		y = wnr;
//		z = WNR;
//	}
//	if (z < x && x < y) {
//		wnr = x;
//		x = y;
//		y = wnr;
//	}
//	if (x < z && z < y) {
//		wnr = x;
//		x = y;
//		y = z;
//		z = wnr;
//	}
//	if (y < z && z < x) {
//		wnr = y;
//		y = z;
//		z = wnr;
//	}
//	else {
//
//	}
//	cout << x << " " << y << " " << z << endl;
//}
//int  main() {
//	float a = 0, b = 0, c = 0;
//	cout << "enter three numbers : "<<endl;
//	cout << "**************";
//	cout << endl;
//	cout << "Three numbers entered by you will became (x>y>z)";
//	cout << endl;
//	cin >> a;
//	cout << endl;
//	cin >> b;
//	cout << endl;
//	cin >> c;
//
//	sort3_desc(a, b, c);
//	cout << endl;
//
//	return 0;
//
//}