#include <iostream>
#include <queue>

using namespace std;

int main() {


    queue <string> cartas;

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cout << "Tamanho da Fila: " << cartas.size() << "\n";

    while(!cartas.empty()){
        cout << "Primeira da Fila" << cartas.front() << "\n";
        cartas.pop();    
    }
    


 return 0;

}

//  push()
//  empty()
//  front()
//  back()
//  size()