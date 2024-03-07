#include <iostream>
#include <stdio.h> // função GETS
#include <stdlib.h> // função MALLOC

using namespace std;


int main(){

    char *vnome;
    vnome = (char *) malloc(sizeof(char)+1);
    
    gets(vnome);
    cout << vnome;

    return 0;
}