// Online C++ compiler to run C++ program online
#include <iostream>

#include <string.h>
using namespace std;

int main() {
    int contador, i, tab, num;
    
    cout << "Digite o número desejado. ";
    cin >> num;
    
    cout << "Até que número você deseja na tabuada? ";
    cin >> tab;
    
    for (contador = 1; contador <= tab; contador++){

       cout << num << " * " << contador << " = " << num * contador << "\n";
        
    }
    
    return 0;
}