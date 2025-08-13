// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: ADDITION OF TWO MATRIX (EXPERIMENT: 8B)

// CODE: 

#include <iostream>
using namespace std;

int main() {
    int a[3][3], b[3][3], sum[3][3];

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

    cout << "\nSum of matrices:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            cout << sum[i][j] << " ";
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

Sum of matrices:
10 10 10 
10 10 10 
10 10 10 
