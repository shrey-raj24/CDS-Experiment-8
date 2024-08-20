// NAME - SHREY RAJ
// PRN - 23070123123
// EXPERIMENT - 8 

#include<iostream> 
using namespace std; 

int main() 
{
    int a[4][4], i, j, k, l;
    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            cout<<"Enter elements: ("<<i<<j<<"):";
            cin>>a[i][j];
        }
    }
    for (k=0; k<4; k++) {
        for (l=0; l<4; l++) {
            cout<<a[k][l];
            cout<<" ";
        }
        cout<<"\n";
    }
}

// Enter elements: (00):2
// Enter elements: (01):7
// Enter elements: (02):4
// Enter elements: (03):3
// Enter elements: (10):6
// Enter elements: (11):7
// Enter elements: (12):9
// Enter elements: (13):8
// Enter elements: (20):4
// Enter elements: (21):3
// Enter elements: (22):25
// Enter elements: (23):34
// Enter elements: (30):38
// Enter elements: (31):7
// Enter elements: (32):6
// Enter elements: (33):0
// 2 7 4 3
// 6 7 9 8
// 4 3 25 34
// 38 7 6 0