#ifndef CLASSES2_H_INCLUDED
#define CLASSES2_H_INCLUDED

class Veiculo{
    public:
        int vel;
        int blind;
        int rodas;

        int getTipo(){return tipo;}
        void setTipo(int n){tipo = n;}

        int getVelMax(){return velMax;}
        void setVelMax(int n){velMax = n;}

        bool getArma(){return arma;}
        void setArma(bool n){arma = n;}

        void imp(){
            std::cout << "Tipo de veiculo: " << tipo << std::endl;
        };
    private:
        int tipo;
        int velMax;
        bool arma;
};

class Moto:public Veiculo{
    public:
        Moto(){
            vel = 0;
            blind = 0;
            rodas = 2;
            setTipo(1);
            setVelMax(120);
            setArma(false);
        };
};


#endif