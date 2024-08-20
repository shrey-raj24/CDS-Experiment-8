// NAME - SHREY RAJ
// PRN - 23070123123
// EXPERIMENT - 8(B)  

#include <iostream>
using namespace std;

int main() {
    // Define matrix dimensions
    int r1 = 3, c1 = 3;
    int r2 = 3, c2 = 3;

    int m1[r1][c1], m2[r2][c2], sum[r1][c1];

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
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }
 

    cout << endl << "Sum of matrices:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// Enter elements of the first matrix:
// Enter element at position (0, 0): 1
// Enter element at position (0, 1): 2
// Enter element at position (0, 2): 3
// Enter element at position (1, 0): 4
// Enter element at position (1, 1): 5
// Enter element at position (1, 2): 6
// Enter element at position (2, 0): 7
// Enter element at position (2, 1): 8
// Enter element at position (2, 2): 9
// Enter elements of the second matrix:
// Enter element at position (0, 0): 0
// Enter element at position (0, 1): 9
// Enter element at position (0, 2): 8
// Enter element at position (1, 0): 7
// Enter element at position (1, 1): 6
// Enter element at position (1, 2): 5
// Enter element at position (2, 0): 4
// Enter element at position (2, 1): 3
// Enter element at position (2, 2): 0
//  
// Sum of matrices:
// 1 11 11
// 11 11 11
// 11 11 9