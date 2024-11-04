// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int I;
    float A, B, C;
    
    cout << "Menu de Opções: \n 1. A, B, C em ordem crescente; \n 2. A, B, C em ordem descrescete; \n 3. O maior número fica no meio. ";
    
    cout << "\ndigite 1, 2 ou 3 para o valor de I. ";
    cin >> I;
    cout << "digite o valor de A. ";
    cin >> A;
    cout << "digite o valor de B. ";
    cin >> B;
    cout << "digite o valor de C. ";
    cin >> C;

switch(I) {
   case 1: 
   
		if (A < B and A < C) {
			cout << A << ", ";
			if(B < C) {
				cout << B << ", " << C;
			} else {
				cout << C << ", " << B;
			}
		} else if(B < A and B < C) {
			cout << B << ", ";
			if(A < C) {
				cout << A << ", " << C;
			} else {
				cout << C << ", " << A;
			}
		} else {
			cout << C << ", ";
			if(C < B) {
				cout << A << ", " << B;
			} else {
				cout << B << ", " << A;
			}
		}
   break;



    case 2: 
   
if (A > B and A > C) {
    cout << A << ", ";
    if (B > C) {
        cout << B << ", " << C;
    } else {
        cout << C << ", " << B;
    }
} else if (B > A and B > C) {
    cout << B << ", ";
    if (A > C) {
        cout << A << ", " << C;
    } else {
        cout << C << ", " << A;
    }
} else {
    cout << C << ", ";
    if (B > A) {
        cout << B << ", " << A;
    } else {
        cout << A << ", " << B;
    }
}
    break;
   


   case 3: 
   
   if(A > C and A > B) {
    cout << B <<  ", " << A << ", " << C;
   }
   if(B > C and B> A) {
    cout << A << ", " << B << ", " << C;
}
   if(C > A and C > B) {
    cout << A << ", " << C << ", " << B;
    }
   break;
   
   default: 
   cout << "Opção inválida!";
   break;


    }

    return 0;
}