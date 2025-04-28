//#include <iostream>
//using namespace std;
//
//int main() {
//	double length  = 0, width, height;
//	const double l=9.5, w=4.5, h=4.5;
//	cout << "Enter the internal length: " << endl;
//	cin >> length;
//	cout << "Enter the internal width" << endl;
//	cin >> width;
//	cout << "Enter the internal height" << endl;
//	cin >> height;
//
//
//	double t_length = (2 * w) + length;
//	double t_width = (2 * w) + width;
//	double t_height = (2 * w) + height;
//
//	double volume = t_height * t_width * t_height;
//	double brick_volume = l * w * h;
//	double total_bricks = volume / brick_volume;
//	cout << "Total bricks needed: " << total_bricks << endl;		
//	cout << "length :" << length << endl;
//	cout << "width :" << width << endl;
//	cout << "height :" << height << endl;	
//	cout << "total length :" << t_length << endl;
//	cout << "total width :" << t_width << endl;
//	cout << "total height :" << t_height << endl;
//	cout << "total volume :" << t_length * t_width * t_height << endl;
//	cout << "brick volume :" << brick_volume << endl;
//	cout << "total volume :" << total_bricks * brick_volume << endl;
//	
//	return 0;
//}