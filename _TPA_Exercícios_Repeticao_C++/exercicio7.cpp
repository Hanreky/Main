// Online C++ compiler to run C++ program online
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int op, i, qtd, n1, n2, soma;
    float raiz, num;
    
    cout << "Menu de opções: \n 1.Somar dois números; \n 2.Raiz de um número.";

    cout << "\nQuantos cáculos você deseja realizar? ";
    cin >> qtd;
    
    for(i = 1; i<= qtd; i++){
        cout << "\nDigite a sua opção desejada (1 ou 2). ";
        cin >> op; 
        
        switch(op){
            case 1:
            cout << "\nDigite o primeiro número. ";
            cin >> n1;
            cout << "\nDigite o segundo número. ";
            cin >> n2;
            soma = n1 + n2;
            cout << "\nA soma dos números é " << soma;
            break;
            
            case 2:
            cout << "\nDigite o número para calcular a sua raiz quadrada. ";
            cin >> num;
            raiz = sqrt(num);
            cout << "\nA raiz quadrada do número é " << raiz;
            break;
            
            default:
            cout << "\nOpção Inválida.";
            break;
        }
    }


    return 0;
}