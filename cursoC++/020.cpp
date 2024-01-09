#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    char palavra[30], letra[1], secreta[30];
    int tam, i, chances, acertos;
    bool acerto = false; 

    chances = 6;
    tam = 0;
    i = 0;
    acertos = 0;

    cout << "Qual a palavra secreta?  ";
    cin >> palavra;
    system("cls");

    while(palavra[i] != '\0') {
        i++;
        tam++;
    }

    for(i=0;i<30;i++){
        secreta[i] = '-';
    }

    while((chances > 0) && (acertos < tam)){
        cout << "chances: " << chances << "\n\n";
        cout << "palavra: " ;
        for(i=0;i<tam;i++){
            cout << secreta[i];
        }
        cout << "\n\n Digite uma Letra: ";
        cin >> letra[0];
        for(i=0;i<tam;i++){
            if(palavra[i] == letra[0]){
                acerto = true;
                secreta[i] = palavra[i];
                acertos++;
            }
        }
        if(!acerto) {
            chances--;
        } 
        acerto=false;
        system("cls");
    }

    if(acertos==tam){
        cout << "Você Ganhou!";
    }else {
        cout << "Você Perdeu!";
    }

    system("pause");


    // char palavra[] = {"GOIABA"};
    // cout << palavra << "\n";
    
    // char letra;

    // inicio:
    // char certas[6] = {};
    // cout << "\n Digite uma letra: \n";
    // cin >> letra;
    // cout << "\n";

    
    // for(int z = 0; z<sizeof(palavra) -1 ; z++){
        
    //     if(letra == palavra[z]){
    //     certas[z] += letra;
    //     cout << certas[z];
    //     } else {
    //     cout << "-";
    //     }
        
    // }
    
    // goto inicio;



    return 0;
}