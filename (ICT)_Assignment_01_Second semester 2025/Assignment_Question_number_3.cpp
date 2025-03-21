#include <iostream>
using namespace std;


bool isPalindrome(char* arr, int size) {
    int left = 0, right = size - 1;
    while (left < right) 
    {
        if (arr[left] != arr[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}


bool isPalindromeMatrix(char** matrix, int size) {
    char* diagonal = new char[size];
    for (int i = 0; i < size; i++) {
        diagonal[i] = matrix[i][i];
    }
    if (!isPalindrome(diagonal, size)) {
        delete[] diagonal;
        return false;
    }
    delete[] diagonal;

    
    for (int i = 0; i < size; i++) {
        if (!isPalindrome(matrix[i], size)) {
            return false;
        }

        char* column = new char[size];
        for (int j = 0; j < size; j++) {
            column[j] = matrix[j][i];
        }

        if (!isPalindrome(column, size)) {
            delete[] column;
            return false;
        }
        delete[] column;
    }
    return true;
}

int main() {
    int size;
    cout << "Enter size of square matrix: ";
    cin >> size;

    char** matrix = new char* [size];
    for (int i = 0; i < size; i++) {
        matrix[i] = new char[size];
    }

    cout << "Enter the matrix elements row by row:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> matrix[i][j];
        }
    }
            
    if (isPalindromeMatrix(matrix, size)) {
        cout << "Output: True (It is a palindrome matrix)\n";
    }
    else {
        cout << "Output: False (It is NOT a palindrome matrix)\n";
    }

    for (int i = 0; i < size; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
