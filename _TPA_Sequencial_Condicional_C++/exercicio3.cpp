// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    
    cout << "Digite o primeiro número. ";
    cin >> num1;
    
    cout << "\nDigite o segundo número. ";
    cin >> num2;
    
    if(num1 > num2){
        cout << "\nO maior número entre os dois é: " << num1;
    }
    else if(num2 > num1){
        cout << "\nO maior número entre os dois é: " << num2;

    }
    
    return 0;
}