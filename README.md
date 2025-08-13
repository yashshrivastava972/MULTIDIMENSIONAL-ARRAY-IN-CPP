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
## Algorithms:

### Algorithm 1: Input and Display a Matrix.
Step 1: Start.

Step 2: Declare integer variables rows, cols and a 2D integer array matrix[3][3].

Step 3: Prompt the user to "Enter number of rows:" and read the value into rows.

Step 4: Prompt the user to "Enter number of columns:" and read the value into cols.

Step 5: Display "Enter matrix elements:".

Step 6: For each row index i from 0 to rows-1:
  For each column index j from 0 to cols-1:
    Prompt "Element [i+1][j+1]:" and read the value into matrix[i][j].

Step 7: Display "The matrix is:".

Step 8: For each row index i from 0 to rows-1:
  For each column index j from 0 to cols-1:
    Print matrix[i][j] followed by a tab (\t).
  After printing each row, move to the next line.

Step 9: Stop.

### Algorithm 2 : Addition of Two 3×3 Matrices.
Step 1: Start.

Step 2: Declare three 3×3 integer matrices: a[3][3], b[3][3], and sum[3][3].

Step 3: Display "Enter first 3x3 matrix:" and read all 9 elements into matrix a using nested loops.

Step 4: Display "Enter second 3x3 matrix:" and read all 9 elements into matrix b using nested loops.

Step 5: For each position (i, j) in the matrices, compute:
sum[i][j] = a[i][j] + b[i][j]

Step 6: Display "Sum of matrices:" and print all elements of matrix sum in 3×3 format using nested loops.

Step 7: Stop.

### Algorithm 3 : Multiplication of Two 3×3 Matrices.
Step 1: Start.

Step 2: Declare three 3×3 integer matrices:
a[3][3], b[3][3], and product[3][3] (initialized to 0).

Step 3: Display "Enter first 3x3 matrix:" and read all 9 elements into matrix a using nested loops.

Step 4: Display "Enter second 3x3 matrix:" and read all 9 elements into matrix b using nested loops.

Step 5: For each row index i from 0 to 2:
  For each column index j from 0 to 2:
    Set product[i][j] = 0
    For each index k from 0 to 2:
      product[i][j] = product[i][j] + (a[i][k] * b[k][j])

Step 6: Display "Product of matrices:" and print all elements of matrix product in 3×3 format using nested loops.

Step 7: Stop.

### Algorithm 4: Sum of Main Diagonal Elements of a 3×3 Matrix.
Step 1: Start.

Step 2: Declare a 3×3 integer matrix matrix[3][3] and an integer variable sum initialized to 0.

Step 3: Display "Enter 3x3 matrix:" and read all 9 elements into matrix using nested loops.

Step 4: For each index i from 0 to 2:
  Add matrix[i][i] to sum
  (matrix[i][i] represents the elements on the main diagonal).

Step 5: Display "Sum of main diagonal elements: " followed by the value of sum.

Step 6: Stop.

### Algorithm 5: Transpose of a 3×3 Matrix.
Step 1: Start.

Step 2: Declare two 3×3 integer matrices:
matrix[3][3] (original matrix) and transpose[3][3] (to store the result).

Step 3: Display "Enter 3x3 matrix:" and read all 9 elements into matrix using nested loops.

Step 4: For each row index i from 0 to 2:
  For each column index j from 0 to 2:
    Set transpose[j][i] = matrix[i][j].
  (This swaps rows with columns.)

Step 5: Display "Transpose of matrix:" and print all elements of transpose in 3×3 format using nested loops.

Step 6: Stop.

### Algorithm 6: Compare First Row and Second Row of a 3×3 Matrix.
Step 1: Start.

Step 2: Declare a 3×3 integer matrix matrix[3][3].

Step 3: Display "Enter 3x3 matrix:" and read all 9 elements into matrix using nested loops.

Step 4: Display "Comparing first row with second row:".

Step 5: For each column index j from 0 to 2:
  If matrix[0][j] is equal to matrix[1][j]:
    Display "Element (j+1): Equal (value)".
  Else:
    Display "Element (j+1): Not Equal (value1 vs value2)".

Step 6: Stop.

## Conclusion:
Studying and implementing 2D arrays in C++ is essential for handling tabular and matrix-based data.
They are a fundamental data structure that allows efficient storage, retrieval, and manipulation of elements in rows and columns.
Matrix operations form the backbone of many engineering, scientific, and computational applications.
