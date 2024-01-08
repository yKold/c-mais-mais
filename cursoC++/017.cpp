#include <iostream>

using namespace std;


int main(){

    inicio:
    int x;

    for(x = 0; x<=100; x++){
        if( ( x % 2 ) == 0 ) {
            cout << x << "\n";
            x++;
        } else {
            x++;
            goto inicio;
        }
    }


    return 0;
}