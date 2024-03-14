#include <iostream>
#include "classes2.h"

using namespace std;


int main(){

    Moto *v1 = new Moto();
    cout << v1 -> rodas << endl;
    v1->setTipo(1);
    v1 -> imp();


    return 0;
}