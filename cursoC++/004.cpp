#include <iostream>

using namespace std;

int main(){

    int vidas = 1; // 10, 20, 30    inteiro padrao
    char letra = 'B'; // B, a, c
    // char letra[29]; // limite de até 29 caracteres
    double decimal = 5.2; // 2.4999999, 1.39999999
    float decimal2 = 5.3; // 2.5      , 1.4   float padrao
    bool vivo = true; // true 1 or false 0
    string nome = 'a'; // string padrao


    // cout << "Digite o numero de vidas: "; cin >> vidas;

    // cout << "Digite uma letra: ";
    // cin >> letra;

    cin >> nome;


    cout << vidas << "\n" << letra << "\n" << decimal << "\n";

    cout << decimal2 << "\n";
    cout << vivo << "\n";
    cout << nome << "\n";

    return 0;
};