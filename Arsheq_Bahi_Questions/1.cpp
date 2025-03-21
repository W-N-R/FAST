//#include<iostream>
//#include<fstream>
//#include<cmath>
//using namespace std;
//const double Pi = 3.14715628292393;
//double Area_cylinder(double radius) {
//	return   Pi * radius * radius;
//}
//int main() {
//	ofstream wali;
//	wali.open("output.txt");
//	int  x = 0, y = 0, w = 1;
//	wali <<  endl;
//	wali << endl;
//	wali << "******************""[ question # 1 ]""******************" << endl;
//	cout << "enter a number you want the pattren upto: ";
//	cout << endl;
//	wali << endl;
//	cin >> x;
//	
//	for (int n = 1;n <= x;n++) {
//		for (int j = 1;j <= n;j++) {
//			wali << "*";
//		}
//		int z=1;
//		for (int j = x;j >= n;j--) {
//			
//			wali << z;
//			z++;
//		}
//		wali << endl;
//		
//	}
//	wali << "----------------------"<<"the end"<<"-----------------------";
//
//	wali << endl;
//	wali << endl;
//
//
//	wali << endl;
//	wali << "******************""[ question # 4 ]""******************" << endl;
//
//	char grade;
//	cout << "enter your respective grade in b/w (a-f): ";
//	cout << endl;
//	cin >> grade;
//	wali << endl;
//	
//	switch (grade) {
//	case 'A':
//		wali << "your gpa is : 4.00";
//		break;
//	case 'B':
//		wali << "your gpa is : 3.50";
//		break;
//	case 'C':
//		wali << "your gpa is : 2.75";
//		break;
//	case 'D':
//		wali << "your gpa is : 2.00";
//		break;
//	case 'F':
//		wali << "fail";
//		break;
//	default :
//		wali << "invalid input";
//	}
//	wali << endl;
//	wali << "----------------------"<<"the end"<<"-----------------------";
//	wali << endl;
//	
//	wali << endl;
//	wali << endl;
//	wali << "******************""[ question # 5 ]""******************" << endl;
//	
//	double radius;
//	cout << "enter the radius you want the area of cylinder: ";
//	cin >> radius;
//
//	double area = Area_cylinder(radius);
//	wali << "so the area of cylinder is : ";
//	wali << area;
//	wali << endl;
//	wali << "----------------------" << "the end" << "-----------------------";
//	wali << endl;
//
//	wali << endl;
//	wali << endl;
//	wali << "******************""[ question # 19 ]""******************" << endl;
//	cout << endl;
//		int n;
//		cout << "enter a 5 digit um you want to swap their first and last digit";
//		cout << endl;
//		cin >> n;
//		
//
//		int j = n % 10000;
//		int k = n % 10;
//		int z = n / 10000;
//		k = k * 10000;
//		int g = k + j;
//		int s = g / 10;
//		int b = s * 10 + z;
//		wali << b;
//		wali << endl;
//		wali << "----------------------" << "the end" << "-----------------------";
//		wali << endl;
//
//		wali << endl;
//		wali << endl;
//		wali << "******************""[ question # 9 ]""******************" << endl;
//		cout << endl;
//
//		int q;
//		cout << "Enter the value you vant the pattren upto: ";
//		cin >> q;
//		cout << endl;
//		for (int i = 1;i < q;i++) {
//			for (int j = q;j > i ;j--) {
//				wali << "*";
//			}
//			cout << endl;
//			wali << endl;
//		}
//    	wali.close();
//	return 0;
//}
//
//
