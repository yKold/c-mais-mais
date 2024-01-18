#include <iostream>
#include <stack>

using namespace std;

int main(){


    stack <string> cartas;

    if(cartas.empty()){
        cout << "pilha vazia" << "\n";
    }else{
        cout << "pilha com cartas" << "\n";
    }

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cout << "Tamanho da Pilha: " << cartas.size() << "\n";

    cout << "Carta Topo da Pilha: " << cartas.top()<<"\n";

    cartas.pop();

    cout << "Tamanho da Pilha: " << cartas.size()<<"\n";
    cout << "Nova Carta Topo da Pilha: " << cartas.top()<<"\n";
    
    return 0;
}


//empty()
// size()
// top()
// pop()
// push()
