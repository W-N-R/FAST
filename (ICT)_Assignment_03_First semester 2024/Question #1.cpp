//#include<iostream>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//
//const double pi = 3.14562739263;
//
//double radius_area(double area) {
//	double radius = sqrt(area / pi);
//	return radius;
//}
//double circumference(double radius) {
//	double circumference = 2 * pi * radius;
//	return circumference;
//}
//double surface_area(double radius, double height) {
//	double surface_area = 2 * pi * radius * (height + radius);
//	return surface_area;
//}
//double volume(double radius, double height){
//	double volume = pi * (radius * radius) * height;
//	return volume;
//}
//int main() {
//	double area, height;
//	cout << "Enter the area of base of cylinder: ";
//	cin >> area;
//	cout << endl;
//	cout << "Enter height of cylinder: ";
//	cin >> height;
//	cout << endl;
//
//	double Radius = radius_area(area);
//	double circum = circumference(Radius);
//	double surfacearea = surface_area(Radius, height);
//	double Volume = volume(Radius, height);
//	
//	cout << fixed << setprecision(2);
//	cout << "radius = " << Radius << endl;
//	cout << "circumference = " << circum << endl;
//	cout << "surface area = " << surfacearea << endl;
//	cout << "volume = " << Volume << endl;
//	return 0;
//}