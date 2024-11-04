// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    float num1, num2, num3;
    
    cout << "Digite três números e eles serão mostrados em ordem crescente. ";
    
    cout << "\nDigite o primeiro número. ";
    cin >> num1;
    
    cout << "\nDigite o segundo número. ";
    cin >> num2;
    
    cout << "\nDigite o terceiro número. ";
    cin >> num3;
    
    if(num1 < num2 and num1 < num3){
        cout << num1 << ", ";
        if(num2 < num3){
            cout << num2 << ", " << num3;
        }
        else if(num3 < num2){
            cout << num3 << ", " << num2;
        }
    }
   else if(num2 < num1 and num2 < num3){
        cout << num2 << ", ";
        if(num1 < num3){
            cout << num1 << ", " << num3;
        }
        else if(num3 < num1){
            cout << num3 << ", " << num1;
        }
    }
    else if(num3 < num1 and num3 < num2){
        cout << num3 << ", ";
        if(num1 < num2){
            cout << num1 << ", " << num2;
        }
        else if(num2 < num1){
            cout << num2 << ", " << num1;
        }
    }

    
    return 0;
}