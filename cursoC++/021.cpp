#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv()) {

    if (argc > 1) {
        if(!strcmp(argv[1], "sol")) {
            cout << "You ao clube.\n\n";
        } else if (!strcmp(argv[1], "nublado")) {    cout << "You ao cinema.\n\n";
        } else {
        cout << "You ficar em casa.\n\n";
    }
    }


    system("pause");
    return 0;
}