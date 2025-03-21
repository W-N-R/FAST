////QUESTION # 01 _ Write a C++ program to print the Fibonacci sequence up to a given
//// number using a while loop. Explain why is a while loop suitable in this scenario?
//
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//    int c = 1, a = 1, b = 0, sum = 1, count = 10, i = 1;
//    cout << "Enter the value till where you want the sequence: ";
//    cin >> count;
//    while (i <= count)
//    {
//        sum = a + b;
//        //cout <<  "sum of " << a << " + " << b << " = " << sum << endl;
//        cout << i << '\t' << sum << endl;
//        b = sum;
//        c = (b - a);
//        a = c;
//        i++;
//
//    }
//    //    system("pause");
//    return 0;
//
//}