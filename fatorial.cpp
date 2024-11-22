#include <iostream>
using namespace std;

int main() {
    int i, num, index, resultado;
    
    cout << "Digite o número: ";
    cin >> num;
    
    resultado = num;
    
    for(i=1; i <= num; i++){
        index = (num-i);
        if(index>0){
            resultado = resultado * index;
        }
    }
    cout << resultado;

    return 0;
}