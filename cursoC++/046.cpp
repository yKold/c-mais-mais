#include <iostream>
#include "classes.h"

using namespace std;


int main(){

    Veiculo *v1 = new Veiculo(2);
    
    cout << v1->getVelMax() << endl;
    v1 -> setLigado(1);
    v1->getLigado()? cout << "Ligado" : cout << "Desligado";


    return 0;
}