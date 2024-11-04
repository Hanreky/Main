// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

#include <math.h>

#include <cmath>

int main() {
    float r, C, A, As, An;
    char op;
    
    cout << "Menu de opções: \n a. O comprimento de uma circunferência; \n b. A área de uma circunferência \n c. A área do setor circular de ângulo central ";
    
    cout << "\nDigite o valor do raio da circunferência. ";
    cin >> r;
    
    do{
    
    cout << "Digite a sua opção desejada. ";
    cin >> op;
    
    if (op == 'A' or op == 'a'){
        C = 2 * M_PI * r;
        cout << "\nComprimento: " << C << "u.m.";
    }
   else if (op == 'B' or op == 'b'){
        A = M_PI * pow(r, 2);
            cout << "\nÁrea da circunferência: " << A << "u.m.²";
    }
    else if (op == 'C' or op == 'c'){
        cout << "Digite o valor do ângulo do setor. ";
        cin >> An;
        As = An * M_PI * pow(r, 2) / 360;
        cout << "\nÁrea do setor: " << As << "u.m.²";
    }
    
    else {
        cout << "\nOpção inválida!";
    }
    
    cout << "\nDigite o valor do raio da circunferência. ";
    cin >> r;
    
    }while(r!=0);
    return 0;
}