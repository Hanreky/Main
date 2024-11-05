// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

float maior(float n1, float n2){
    if (n1 > n2){
        return n1;
    }
    else{
        return n2;
    }
}

int main() {
    float n1, n2;
    
    printf("Código que recebe dois números e mostra o maior.\n");
    
    cout << "Digite o primeiro número: ";
    cin >> n1;
    
    cout << "Digite o segundo número: ";
    cin >> n2;
    
    cout << "O maior número é: " << maior(n1, n2);
    
    return 0;
}