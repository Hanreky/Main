// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int I;
    float n1, n2, n3;
    
    cout << "Menu de opções: \n 1. A, B, C em ordem crescente; \n 2. A, B, C em ordem decrescente; \n 3. O maior fica entre os outros dois números.\nDigite a opção desejada: ";
    cin >> I;
    while (I < 1 or I > 3) {
        cout << "Opção inválida. Digite novamente: ";
        cin >> I;
    }
    
    cout << "Digite o valor de A: ";
    cin >> n1;
    
    cout << "Digite o valor de B: ";
    cin >> n2;
    
    cout << "Digite o valor de C: ";
    cin >> n3;
    
    if(I == 1){
        if(n1 <= n2 && n1 <= n3){
        cout << n1 << ", ";
        if(n2 <= n3){
            cout << n2 << ", " << n3;
        }
        else if(n3 <= n2){
            cout << n3 << ", " << n2;
        }
    }
    else if(n2 <= n1 && n2 <= n3){
        cout << n2 << ", ";
        if(n1 <= n3){
            cout << n1 << ", " << n3;
        }
        else if(n3 <= n1){
            cout << n3 << ", " << n1;
        }
    }
    else if(n3 <= n2 && n3 <= n1){
        cout << n3 << ", ";
        if(n2 <= n1){
            cout << n2 << ", " << n1;
        }
        else if(n1 <= n2){
            cout << n1 << ", " << n2;
        }
     }
    }
    if(I == 2){
        if(n1 >= n2 && n1 >= n3){
        cout << n1 << ", ";
        if(n2 >= n3){
            cout << n2 << ", " << n3;
        }
        else if(n3 >= n2){
            cout << n3 << ", " << n2;
        }
    }
    else if(n2 >= n1 && n2 >= n3){
        cout << n2 << ", ";
        if(n1 >= n3){
            cout << n1 << ", " << n3;
        }
        else if(n3 >= n1){
            cout << n3 << ", " << n1;
        }
    }
    else if(n3 >= n2 && n3 >= n1){
        cout << n3 << ", ";
        if(n2 >= n1){
            cout << n2 << ", " << n1;
        }
        else if(n1 >= n2){
            cout << n1 << ", " << n2;
        }
     }
    }
    if(I == 3){
        if (n1 > n2 && n1 > n3){
            cout << n2 << ", " << n1 << ", " << n3;
        }
        else if (n2 > n3 && n2 > n1){
            cout << n1 << ", " << n2 << ", " << n3;
        }
        else if (n3 > n2 && n3 > n1){
            cout << n1 << ", " << n3 << ", " << n2;
        }
    }
    
    return 0;
}