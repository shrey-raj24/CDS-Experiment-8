
// NAME - SHREY RAJ
// PRN - 23070123123
// EXPERIMENT - 8F      

// To find the transpose of a matrix. 

#include<iostream> 
using namespace std;      

int main() 
{
    int r, c ;

    // Getting the size of the matrix
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> r  >> c ;

    int m[r][c], transpose[c][r];

    // Getting elements of the matrix
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> m[i][j];
        }
    }

    // Transposing the matrix
    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            transpose[j][i] = m[i][j];
        }
    }

    // Displaying the transpose of the matrix
    cout << "\nTranspose of the matrix:" << endl;
    for(int i = 0; i < c; ++i) {
        for(int j = 0; j < r; ++j) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
} 

// Enter the number of rows and columns of the matrix: 4
// 3
// Enter elements of the first matrix:
// Enter element at position (0, 0): 2
// Enter element at position (0, 1): 3
// Enter element at position (0, 2): 5
// Enter element at position (1, 0): 4
// Enter element at position (1, 1): 5
// Enter element at position (1, 2): 1
// Enter element at position (2, 0): 9
// Enter element at position (2, 1): 7
// Enter element at position (2, 2): 6
// Enter element at position (3, 0): 5
// Enter element at position (3, 1): 4
// Enter element at position (3, 2): 3
// 
// Transpose of the matrix:
// 2 4 9 5
// 3 5 7 4
// 5 1 6 3
