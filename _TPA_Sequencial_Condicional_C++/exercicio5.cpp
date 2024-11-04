// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Digite o número para verificar se é par ou ímpar. ";
    cin >> num;
    
    if(num % 2 == 0){
        cout << "O número é par. ";
    }
    else{
        cout << "O número é ímpar. ";
    }
    
    return 0;
}