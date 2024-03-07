#include <iostream>
#include "Aviao.h"

using namespace std;


int main(){

    Aviao *av1 = new Aviao(1);
    Aviao *av2 = new Aviao(2);
    Aviao *av3 = new Aviao(3);

    av1->Imprimir();
    cout << "_________________" << endl;
    av2->Imprimir();
    cout << "_________________" << endl;
    av3->Imprimir();
    


    return 0;
}