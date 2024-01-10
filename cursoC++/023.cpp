#include <iostream>

using namespace std;

void soma();
void soma(int n1, int n2);

int main() {
    soma(20,30);
    soma();
    return 0;

}

void soma(int n1, int n2){
    int re;
    re = n1+n2;
    cout << "\n\nSoma: \n" << re << "\n";
}

void soma() {
    int n1, n2, re;
    n1=10;
    n2=20;
    re=n1+n2;

    cout << "\n\nSoma: \n" << re << "\n";
}