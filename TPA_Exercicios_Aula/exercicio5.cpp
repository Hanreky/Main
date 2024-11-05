// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool EPar(int num){
    if (num % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    int num;
    
    cout << "Digite o número para verificar se ele é par: ";
    cin >> num;
    
    if (EPar(num) == true){
        printf("É par. ");
    }
    else {
        printf("É ímpar. ");
    }
    
    return 0;
}