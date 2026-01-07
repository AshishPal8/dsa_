#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int A[3][4] = {{1,2,3,4}, {4,6,7,8}, {6,8,9,5}};

    int *B[3];
    int **C;

    cout << "-------A--------" << endl;
    for(int i = 0; i< 3; i++){
        for(int j = 0; j < 4; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    B[0] = new int[4];
    B[1] = new int[4];
    B[2] = new int[4];

    cout << "-------B--------" << endl;
    for(int i = 0; i< 3; i++){
        for(int j = 0; j < 4; j++){
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    C = new int*[3];
    C[0] = new int[4];
    C[1] = new int[4];
    C[2] = new int[4];

    cout << "-------C--------" << endl;
    for(int i = 0; i< 3; i++){
        for(int j = 0; j < 4; j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}