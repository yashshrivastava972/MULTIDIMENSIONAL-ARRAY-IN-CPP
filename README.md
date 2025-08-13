# Aim: To study and implement C++ 2D Array – Matrices.

## Tool: VS CODE.

## Theory:
What Is a 2D Array?

A 2D array is essentially an array of arrays. It represents data in a matrix format—rows and columns—ideal for grid-based problems like image processing, game boards, or mathematical matrices.

1. Introduction to 2D Arrays
A 2D array in C++ is a collection of elements arranged in rows and columns, forming a matrix-like structure.
It is essentially an array of arrays, where each row contains a fixed number of columns.

data_type array_name[rows][columns];

int matrix[3][4]; // 3 rows, 4 columns

2. Matrix Representation
Row Index: Represents the horizontal position (starting from 0).
Column Index: Represents the vertical position (starting from 0).
Storage in Memory: Stored in row-major order (all elements of the first row are stored first, then the second row, and so on).

Example for a 3×3 matrix:
[ a11  a12  a13 ]
[ a21  a22  a23 ]
[ a31  a32  a33 ]

Access an element:
matrix[1][2]; // element at 2nd row, 3rd column

3. Initialization of 2D Arrays
Compile-time initialization:
int matrix[2][3] = { {1, 2, 3}, {4, 5, 6} };

Partial initialization:
int matrix[2][3] = { {1, 2}, {4} }; // remaining values become 0

Run-time initialization (using loops):
for(int i=0; i<rows; i++) {
    for(int j=0; j<cols; j++) {
        cin >> matrix[i][j];
    }
}

4. Common Matrix Operations in C++
Matrix Input & Output – Taking values from user and displaying them.
Matrix Addition/Subtraction – Adding or subtracting corresponding elements.
Matrix Multiplication – Multiplying rows of the first matrix with columns of the second matrix.
Transpose of Matrix – Swapping rows and columns.
Diagonal Operations – Summing or extracting diagonal elements.
Comparison – Comparing two matrices element-wise.

5. Advantages of 2D Arrays
Easy representation of tabular data.

Direct access to any element using indices.

Useful for mathematical and computational problems (e.g., image processing, games, simulations).

6. Applications of Matrices
Computer Graphics: Transformations, scaling, rotation.
Scientific Calculations: Solving linear equations, engineering simulations.
Data Processing: Storing tabular data like marksheets.
Games & Simulations: Chessboard, Sudoku grids.
Image Processing: Representing pixels as matrix values.

7. Example: Matrix Addition
#include <iostream>
using namespace std;

int main() {
    int a[2][2], b[2][2], sum[2][2];
    
    cout << "Enter elements of first matrix:\n";
    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++)
            cin >> a[i][j];
    
    cout << "Enter elements of second matrix:\n";
    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++)
            cin >> b[i][j];
    
    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++)
            sum[i][j] = a[i][j] + b[i][j];
    
    cout << "Sum of matrices:\n";
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }
}

## Conclusion:
Studying and implementing 2D arrays in C++ is essential for handling tabular and matrix-based data.
They are a fundamental data structure that allows efficient storage, retrieval, and manipulation of elements in rows and columns.
Matrix operations form the backbone of many engineering, scientific, and computational applications.
