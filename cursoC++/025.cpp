#include <iostream>

using namespace std;

void contador(int num, int contagem=0){
    cout << contagem << "\n\n";
    if(num > contagem){
        contador(num, ++contagem);
    }
}

int main(){


    contador(20);


    return 0;
}