#include <iostream>

using namespace std;


int main(){

    int num1 = 30;
    int num2 = 20;


    if(num1 > num2){
        cout << "valor 1 maior que valor 2";
    } else if (num1 < num2) {
        cout << "valor 2 maior que valor 1";
    } else {
        cout << "caguei";
    }

    return 0;
}