#include <iostream>

using namespace std;

struct Carro{   
    string nome;
    string cor;
    int pot;
    int velMax;
    int vel;

    void insere(string stnome, string stcor, int stpot, int stvelmax){
        nome = stnome;
        cor = stcor;
        pot = stpot;
        velMax = stvelmax;
        vel = 0;
    }

    void mostra(){
        cout << "NOME:           " << nome << "\n";
        cout << "COR:            "<< cor << "\n";
        cout << "POTENCIA:       " << pot << "\n";
        cout << "VELOCIDADE MAX: "<< velMax << "\n";
        cout << "VELOCIDADE AGR: "<< vel << "\n";
    }

    void mudaVel(int mv){
        vel = mv;
        if(vel > velMax){
            vel = velMax;
        } 
        if(vel < 0){
            vel = 0;
        }
    }
};


int main() {

    Carro car1;

    car1.insere("Tornado", "Branco", 450, 350);
    car1.mudaVel(-240);
    car1.mostra();
    

    return 0;

}