#include <iostream>

using namespace std;

void texto ();
void soma(int n1, int n2);
int soma2(int n1, int n2);

void tr(string tra[3]){
    for(int i =0; i < 3; i++){
        cout << "\n" << tra[i] << "\n";
    }

}

int main(){
    int res;

    string basics[3]={"agua","luz","esgoto"};

    tr(basics);

    res=soma2(175,25);
    cout << res;
    soma(15, 5);

    return 0;
}

void texto(){
    cout << "Gabriel Vitor lindo pra krlh! \n\n";
}

void soma(int n1, int n2){
    cout << "\n\nSoma:" << n1+n2 << "\n\n";
}

int soma2(int n1, int n2) {
    return n1+n2;
}