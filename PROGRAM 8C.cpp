// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: MULTIPLICATION OF MATRIX (EXPERIMENT: 8C)

// CODE: 

#include <iostream>
using namespace std;

int main() {
    int a[3][3], b[3][3], product[3][3] = {0};

    cout << "Enter first 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter second 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "\nProduct of matrices:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// OUTPUT: 

// Enter first 3x3 matrix:
// 1 2 3 
// 4 5 6
// 7 8 9
// Enter second 3x3 matrix:
// 9 8 7
// 6 5 4
// 3 2 1

// Product of matrices:
// 30 24 18 
// 84 69 54 
// 138 114 90 
