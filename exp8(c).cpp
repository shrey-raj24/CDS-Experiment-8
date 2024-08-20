
// NAME - SHREY RAJ
// PRN - 23070123123
// EXPERIMENT - 8(C)  

#include <iostream>
using namespace std;

int main() {
    // Define matrix dimensions
    int r1 = 2, c1 = 2;
    int r2 = 2, c2 = 2;

    int m1[r1][c1], m2[r2][c2], sub[r1][c1];

    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> m1[i][j];
        }
    }
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> m2[i][j];
        }
    }

    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            sub[i][j] = m1[i][j] -  m2[i][j];
        }
    }
 

    cout << endl << "Difference of the matrices is: " << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cout << sub[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// Enter elements of the first matrix:
// Enter element at position (0, 0): 4
// Enter element at position (0, 1): 3
// Enter element at position (1, 0): 7
// Enter element at position (1, 1): 9
// Enter elements of the second matrix:
// Enter element at position (0, 0): 1
// Enter element at position (0, 1): 2
// Enter element at position (1, 0): 4
// Enter element at position (1, 1): 5
//  
// Difference of the matrices is:
// 3 1
// 3 4
