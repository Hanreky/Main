// Online C++ compiler to run C++ program online
#include <iostream>

#include <string.h>
using namespace std;

int main() {
    int quan, c;
    float num, soma;
    
    cout << "Quantos números serão somados? ";
    cin >> quan;
    
    for (c = 1; c <= quan; c++){
        cout << "Digite o " <<  c << "° número: ";
        cin >> num;
        
        soma = soma + num;
    }
    cout << "A soma é: " << soma;
    
    return 0;
}