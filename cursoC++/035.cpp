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
        cout << "VELOCIDADE AGR: "<< vel << "\n\n";
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

    // Carro *carros = new Carro[5];

    // Carro car1, car2, car3, car4, car5;

    // carros[0] = car1; 
    // carros[1] = car2; 
    // carros[2] = car3;
    // carros[3] = car4; 
    // carros[4] = car5; 

    // carros[0].insere("Tornado","vermelho",450,350); 
    // carros[1].insere("Luxo","Preto",250,260); 
    // carros[2].insere("Familia","prata",150,180);
    // carros[3].insere("Trabalho","branco",80,120); 
    // carros[4].insere("Padrao","cinza",100,150); 

    int numCarros;
    cout << "Digite o número de carros: ";
    cin >> numCarros;
    Carro carros[numCarros];
    
    for (int i = 0; i < numCarros; i++) {
        string nome, cor;
        int pot, velMax;

        cout << "Digite os detalhes para o carro " << i+1 << ":\n";
        cout << "Nome: "; cin >> nome;
        cout << "Cor: "; cin >> cor;
        cout << "Potência: "; cin >> pot;
        cout << "Velocidade Máxima: "; cin >> velMax;

        carros[i].insere(nome, cor, pot, velMax);
    }




    // for(int i = 0; i< 5; i++){
    //     carros[i].mostra();
    // }
    

    return 0;

}