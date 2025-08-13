#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];

    // Input matrix
    cout << "Enter 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    // Comparing first row and second row
    cout << "\nComparing first row with second row:\n";
    for (int j = 0; j < 3; j++) {
        if (matrix[0][j] == matrix[1][j]) {
            cout << "Element " << j + 1 << ": Equal (" << matrix[0][j] << ")\n";
        } else {
            cout << "Element " << j + 1 << ": Not Equal (" 
                 << matrix[0][j] << " vs " << matrix[1][j] << ")\n";
        }
    }

    return 0;
}

// OUTPUT:

Enter 3x3 matrix:
1 2 3 
1 5 3
4 5 6

Comparing first row with second row:
Element 1: Equal (1)
Element 2: Not Equal (2 vs 5)
Element 3: Equal (3)
