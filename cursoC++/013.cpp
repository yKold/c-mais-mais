#include <iostream>

using namespace std;


int main(){

    int val;

    cout << "selecione uma cor: \n";
    cout << "[1,3,5]Verde, [2]azul\n";
    cin >> val;

    switch (val)
    {
    case 1:
    case 3:
    case 5:
        cout << "verde";
        break;
    case 2:
        cout << "azul";
        break;
    default:
        cout << "invalido";
        break;
    }

    return 0;
}