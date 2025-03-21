//#include <iostream>
//#include<fstream>
//using namespace std;
//int main() {
//	fstream in("input.txt");
//	in.is_open();
//	ofstream out("output.txt");
//	out.is_open();
//	
//	out << "NO." << "\t" << "  Square" << "\t" << "   Cube" << "\t" << "     Factorial" << endl;
//	int i=1;
//	while (!in.eof()) {
//		int w = 1, n = i;
//		for (int j = 1;j <= i;j++) {
//			w = w * j;
//		}
//		out << i << "\t" << "\t" << pow(i, 2) << "\t" << "\t" << "\t" <<  pow(i, 3) << "\t" << "\t" << "\t"<< w <<endl;
//
//		in >> i;
//	}
//	in.close();
//	out.close();
//	return 0;
//}