
#include <iostream>
#include <vector>

using namespace std;


int main(){

    vector<int> num1;
    vector<int> num2; // ou vector<int> num(5);
    int tam, i;

    num1.push_back(10); num1.push_back(2); num1.push_back(3); num1.push_back(5); num1.push_back(6);

    num2.push_back(13); num2.push_back(3); num2.push_back(342); num2.push_back(52); num2.push_back(61);

    num1.insert(num1.begin()+2, 888);
    num1.erase(num1.begin());

    num1.swap(num2);
    
    tam = num1.size(); 
    cout << "Tamanho " << tam << endl;

    cout << "primeiro numero: " << num1.front() << endl;
    cout << "primeiro numero: " << num2.front() << endl << "\n";
    cout << "ultimo numero: " << num1.back() << endl;
    cout << "ultimo numero: " << num2.back() << endl << "\n";
    cout << "segunda posicao: " << num1.at(2) << endl;
    cout << "segunda posicao: " << num2.at(2) << endl;

    for(i=0;i<num1.size();i++){
        cout<<num1[i]<<endl;
    }
    cout << "\n";

    for(i=0;i<num2.size();i++){
        cout<<num2[i]<<endl;
    }

    while(!num1.empty()){
        num1.pop_back();
    }

    num1.clear();

    cout << "tamanho n1: " << num1.size();

    return 0;
}