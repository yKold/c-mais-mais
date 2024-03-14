#include <iostream>
#include <fstream>

using namespace std;


int main(){

    //  ofstream,   ifstream,   fstream

    ofstream arquivo;
    
    arquivo.open("cfbcursos.txt");
    arquivo << "CFB Cursos";

    return 0;
}