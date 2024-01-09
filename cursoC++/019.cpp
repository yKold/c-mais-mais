#include <iostream>

using namespace std;

int main() {

    int matriz[4][3];

    matriz[0][0] = 0;
    matriz[0][1] = 0;
    matriz[0][2] = 0;

    matriz[1][0] = 1;
    matriz[1][1] = 1;
    matriz[1][2] = 1;
    
    matriz[2][0] = 2;
    matriz[2][1] = 2;
    matriz[2][2] = 2;

    matriz[3][0] = 3;
    matriz[3][1] = 3;
    matriz[3][2] = 3;


    for(int l = 0; l < 4; l++){
        for(int c = 0; c < 3; c++){
            cout << matriz[l][c] << "  ";
        }
        cout << "\n";
    }

    return 0;
}