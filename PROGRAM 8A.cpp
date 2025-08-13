// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: TAKE MATRIX INPUT FROM USER AND DISPLAY IT (EXPERIMENT: 8A)

// CODE: 

#include <iostream>
using namespace std;

int main() {
    int rows, cols;
 
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[3][3];


    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i+1 << "][" << j+1 << "]: ";
            cin >> matrix[i][j];
        }
    }


    cout << "\nThe matrix is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

// OUTPUT: 

// Enter number of rows: 3
// Enter number of columns: 3
// Enter matrix elements:
// Element [1][1]: 1
// Element [1][2]: 2
// Element [1][3]: 3
// Element [2][1]: 4
// Element [2][2]: 5
// Element [2][3]: 6
// Element [3][1]: 7
// Element [3][2]: 8
// Element [3][3]: 9

// The matrix is:
// 1	2	3	
// 4	5	6	
// 7	8	9	
