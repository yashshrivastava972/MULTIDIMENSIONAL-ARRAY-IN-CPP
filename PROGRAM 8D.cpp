// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: DIAGONAL ADDITION OF MATRIX (EXPERIMENT: 8D)

// CODE: 

#include <iostream>
using namespace std;

int main() {
    int matrix[3][3], sum = 0;

    cout << "Enter 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    // Adding diagonal elements
    for (int i = 0; i < 3; i++) {
        sum += matrix[i][i]; // main diagonal
    }

    cout << "\nSum of main diagonal elements: " << sum;

    return 0;
}

// OUTPUT:

// Enter 3x3 matrix:
// 1 2 3 
// 4 5 6 
// 7 8 9

// Sum of main diagonal elements: 15
