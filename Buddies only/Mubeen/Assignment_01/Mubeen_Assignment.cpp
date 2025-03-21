////////////////////////////// Question # 1//////////////////////////////////


//#include <iostream>
//#include<ctime>
//using namespace std;
//
//void Display(int** x, int size)
//{
//
//    for (int i = 0; i < size; i++)
//    {
//        cout << *x[i] << " ";
//    }
//}
//
//int main()
//{
//
//    srand(time(0));
//    int s;
//    cout << "Enter the size of sentence : ";
//    cin >> s;
//
//    int* arr = new int[s];
//
//    for (int i = 0; i < s; i++)
//    {
//        arr[i] = (rand() % 200) - 100;
//        if (arr[i] == 0)
//        {
//            arr[i] = 1;
//        }
//    }
//
//    int positive = 0;
//    int negative = 0;
//
//    int** pos = new int* [s];
//    int** neg = new int* [s];
//
//    for (int i = 0; i < s; i++)
//    {
//        if (arr[i] > 0)
//        {
//            pos[positive++] = &arr[i];
//        }
//        else
//        {
//            neg[negative++] = &arr[i];
//        }
//    }
//    cout << "Total positive numbers are : " << positive << endl;
//    cout << "Total negative numbers are : " << negative << endl;
//
//    cout << "The positive numbers in array are : ";
//    Display(pos, positive);
//    cout << endl;
//    cout << "The negative numbers in array are : ";
//    Display(neg, negative);
//
//    delete[] arr;
//    delete[] pos;
//    delete[] neg;
//
//    return 0;
//}

///////////////////////////////////Question # 2////////////////////////////



//
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//int numOfOccurences(char* sentence, char* find)
//{
//    int count = 0;
//    int slength = strlen(sentence);
//    int flength = strlen(find);
//
//    for (int i = 0; i <= slength - flength; i++)
//    {
//        bool match = true;
//
//        for (int j = 0; j < flength; j++)
//        {
//            if (sentence[i + j] != find[j])
//            {
//                match = false;
//                break;
//            }
//        }
//
//        if (match)
//        {
//            count++;
//        }
//    }
//
//    return count;
//}
//
//int main()
//{
//    cout << "Enter size of sentence : ";
//    int s;
//    cin >> s;
//    char* sentence = new char[s];
//    cout << "Enter size of find : ";
//    int n;
//    cin >> n;
//    char* find = new char[n];
//
//     cin.ignore();
//    cout << "Enter the sentence: ";
//    cin.getline(sentence, s);
//    cout << "Enter the words or sentence to find: ";
//    cin.getline(find, n);
//
//    int occurrences = numOfOccurences(sentence, find);
//    cout << "The " << find << "appears " << occurrences << " times in the sentence." << endl;
//
//    delete[] sentence;
//    delete[] find;
//    return 0;
//}







///////////////////////////////Question #3///////////////////////////////


#include <iostream>
#include<string>
using namespace std;

bool isPalindrome(char arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        if (arr[i] != arr[size - 1 - i])
        {
            return false;
        }
    }
    return true;
}

bool isPalindromeMatrix(char** matrix, int size)
{
    
    char diagonal[size];
    for (int i = 0; i < size; i++)
    {
        diagonal[i] = matrix[i][i];
    }
    if (!isPalindrome(diagonal, size))
        return false;

    for (int i = 0; i < size; i++)
    {
        if (!isPalindrome(matrix[i], size))
            return false;

        for (int j = 0; j < size / 2; j++)
        {
            if (matrix[j][i] != matrix[size - 1 - j][i])
                return false;
        }
    }

    return true;
}

int main()
{
    int size;
    cout << "Enter size of square matrix: ";
    cin >> size;

    char** matrix = new char* [size];
    for (int i = 0; i < size; i++)
    {
        matrix[i] = new char[size];
    }

    cout << "Enter matrix elements ";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix[i][j];
        }
    }

    if (isPalindromeMatrix(matrix, size))
    {
        cout << "The matrix is palindrome" << endl;
    }
    else
    {
        cout << "The matrix is not palindrome" << endl;
    }


    for (int i = 0; i < size; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}



    //////////////////////////Question # 4///////////////////////////////


//#include <iostream>
//#include <fstream>
//#include <sstream>
//    using namespace std;
//
//
//    struct Student {
//        string rollNumber;
//        string name;
//        string courses[10];
//        int courseCount;
//    };
//
//
//    void loadAndDisplayStudents(string& filename) {
//        ifstream file;
//        file.open(filename);
//        if (!file) {
//            cout << "Error: Could not open file " << filename << endl;
//            return;
//        }
//
//        int studentCount;
//        file >> studentCount;
//        file.ignore();
//
//        Student students[studentCount];
//
//        for (int i = 0; i < studentCount; i++) {
//            getline(file, students[i].rollNumber, ' ');
//            cin.line(file, students[i].name, ' ');
//
//            string course;
//            students[i].courseCount = 0;
//            while (file >> course) {
//                students[i].courses[students[i].courseCount++] = course;
//                if (file.eof()) break;
//            }
//        }
//
//        file.close();
//
//
//        cout << "\nStudent Data:\n";
//        for (int i = 0; i < studentCount; i++) {
//            cout << "Roll Number: " << students[i].rollNumber << endl;
//            cout << "Name: " << students[i].name << endl;
//            cout << "Courses: ";
//            for (int j = 0; j < students[i].courseCount; j++) {
//                cout << students[i].courses[j] << " ";
//            }
//            cout << endl;
//            cout << "----------------------" << endl;
//        }
//    }
//
//    int main() {
//        string filename = "24l-6168.txt";
//        loadAndDisplayStudents(filename);
//        return 0;
//    }
