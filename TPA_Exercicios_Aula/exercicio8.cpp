// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <math.h>

int main() {
    int op;
    float n1, n2;
    
    cout << "Menu de Opções: \n 1. Somar dois números; \n 2. Raiz quadrada de um número. \nDigite a opção desejada: ";
    cin >> op;
    while (op != 1 and op != 2){
        cout << "Opção Inválida. Digite novamente: ";
        cin >> op;
    }
    if(op == 1){
        cout << "Digite o primeiro número: ";
        cin >> n1;
        
        cout << "Digite o segundo número: ";
        cin >> n2;
        
        cout << n1 + n2;
    }
    else if(op == 2){
        cout << "Digite o número: ";
        cin >> n1;
        
        cout << sqrt(n1);
    }
    
    return 0;
}