#include <iostream>

using namespace std;


int main(){

    string veiculo = "Carro";
    string *ponteiroVeiculo;

    ponteiroVeiculo = &veiculo;

    cout << ponteiroVeiculo << "\n";
    cout << *ponteiroVeiculo << "\n";

    *ponteiroVeiculo = "Moto";  

    cout << ponteiroVeiculo << "\n";
    cout << *ponteiroVeiculo << "\n";


    return 0;
}