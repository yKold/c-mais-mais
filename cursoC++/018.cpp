#include <iostream>

using namespace std;


int main(){

    int tamanho = 3;
    int vetor[tamanho] = { 10, 20, 30};

    

    // cout << sizeof(vetor);
    // sizeof(vetor)

    for(int i = 0; i < tamanho; i++){
        cout << vetor[i] << "\n";
    }

    return 0;
}