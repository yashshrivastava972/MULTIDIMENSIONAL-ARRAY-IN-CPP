// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: TRANSPOSE OF MATRIX (EXPERIMENT: 8E)

// CODE: 

#include <iostream>
using namespace std;

int main() {
    int matrix[3][3], transpose[3][3];

    // Input matrix
    cout << "Enter 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    // Finding transpose
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Output transpose
    cout << "\nTranspose of matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// OUTPUT:

// Enter 3x3 matrix:
// 1 2 3
// 4 5 6
// 7 8 9

// Transpose of matrix:
// 1 4 7 
// 2 5 8 
// 3 6 9 
