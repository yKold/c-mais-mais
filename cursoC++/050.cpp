#include <iostream>
#include <fstream>

using namespace std;


int main(){

    //  ofstream,   ifstream,   fstream

    ofstream arquivo;
    
    arquivo.open("cfbcursos.txt", ios::app);
    arquivo << "CFB Cursos \n OIII";
    arquivo.close();

    return 0;
}