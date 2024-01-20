#include <iostream>

using namespace std;

struct Carro{   
    string nome;
    string cor;
    int pot;
    int velMax;
};


int main() {

    Carro car1;

    car1.nome = "tornado";
    car1.cor = "vermelha";
    car1.pot = 450;
    car1.velMax = 350;

    cout << car1.nome << "\n";
    cout << car1.cor << "\n";
    cout << car1.pot << "\n";
    cout << car1.velMax << "\n";


    return 0;

}