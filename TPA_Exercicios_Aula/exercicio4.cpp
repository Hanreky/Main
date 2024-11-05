// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3;
    
    printf("Código que recebe três números e os mostra em ordem crescente.\n");
    
    cout << "Digite o primeiro número: ";
    cin >> n1;
    
    cout << "Digite o segundo número: ";
    cin >> n2;
    
    cout << "Digite o terceiro número: ";
    cin >> n3;
    
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
    
    return 0;
}