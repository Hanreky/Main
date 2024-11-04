// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float opcao, n1, n2, soma, rraiz;

  cout << "Menu de opções: ";
  cout << "\n 1. Somar dois números; ";
  cout << "\n 2. Raiz Quadrada de um número. ";

  cout << "\n digite a opção desejada. ";
  cin >> opcao;

  if(opcao == 1) {
    cout << "digite o primeiro número. ";
    cin >> n1;
    cout << "digite o segundo número. ";
    cin >> n2;
    soma = n1 + n2;
    cout << n1 << " + " << n2 << " = " << soma;
   }

   if(opcao == 2) {
    cout << "digite o número para calcular sua raiz quadrada. ";
    cin >> n1;
    rraiz = sqrt(n1);
    cout << "√" << n1 << " = " << rraiz;
    

   }
    return 0;
}