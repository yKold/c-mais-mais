#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Veiculo{
    public:
        int vel;
        int tipo;
        Veiculo(int tp);
        int getVelMax();
        void setVelMax(int vm);
        bool getLigado();
        void setLigado(int l);
    private:
        std::string nome;
        int velMax;
        bool ligado;
        
};

int Veiculo::getVelMax(){
    return velMax;
}

void Veiculo::setVelMax(int vm){
    velMax = vm;
}

bool Veiculo::getLigado(){
    return ligado;
}

void Veiculo::setLigado(int l){
    if(l == 1){
        ligado = true;
    } else if(l == 0){
        ligado = false;
    }
}
Veiculo::Veiculo(int tp){
    tipo = tp;
    if(tipo == 1){
        nome = "Carro";
        setVelMax(200);
    } else if(tipo == 2){
        nome = "Aviao";
        setVelMax(800);
    } else if (tipo == 3){
        nome = "Navio";
        setVelMax(120);
    }
    ligado = false;
}

#endif