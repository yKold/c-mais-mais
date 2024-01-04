#include <iostream>
#include <cstdlib>

using namespace std;


int main(){

    int num1 = 30;
    int num2 = 20;
    char opc;

    system("cls");

    inicio: 

    if(num1 > num2){
        cout << "valor 1 maior que valor 2\n\n";
    } else if (num1 < num2) {
        cout << "valor 2 maior que valor 1\n\n";
    } else {
        cout << "caguei";
    }

    cout << "Quer voltar ao inicio? [s/n]: \n\n";
    cin >> opc;

    if (opc == 's' or opc == 'S') {
        goto inicio;
    } else {
        cout << "\n\nObrigado!";
    }

    return 0;
}