#include <iostream>

using namespace std;

void somar(float *var, float valor){
    *var += valor;
};
void iniVetor(float *v){
    v[0]=5;
    v[1]=5;
    v[2]=5;
    v[3]=5;
    v[4]=5;
};

int main(){

    float num = 0;
    float vetor[5];

    iniVetor(vetor);
    somar(&num,15);

    cout << num << "\n\n";
    for(int n = 0; n<5; n++){
        cout << vetor[n] << "\n";
    }

    return 0;
};

