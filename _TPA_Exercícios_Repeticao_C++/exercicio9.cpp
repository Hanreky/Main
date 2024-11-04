// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    
   float sal1, salbon, salau, salario_final, media, totau, totalbon;
    int i, funcionarios;

    cout << "\nDigite a quantidade de funcionários. ";
    cin >> funcionarios;
    
   for(i = 1; i <= funcionarios; i++) {

    cout << "\nDigite o seu salário. ";
    cin >> sal1;

    if(sal1 < 500) {
      salau = 150;
    salbon = sal1 * 0.05;
    salario_final = sal1 + salbon + salau;
    cout << "\n O salário final é: R$ " << salario_final;
   }

    else if(sal1 >= 500 and sal1 <= 1200) {
      salbon = sal1 * 0.12;
      salario_final = sal1 + salbon;
      if(sal1 < 600 ){
      salau = 150;
      salario_final = sal1 + salbon + salau;
     }
      if(sal1 > 600) {
      salau = 100;
      salario_final = sal1 + salbon + salau;
     }
     cout << "\nO salário final é: R$ " << salario_final;

    }

    else if(sal1 > 1200) {
      salbon = 0;
      salau = 100;
      salario_final = sal1 + salau;
      cout << "O salário final é: R$ " << salario_final;
    }
    media = media + salario_final;
    totau = totau + salau;
    totalbon = totalbon + salbon;
    }
    media = media / funcionarios;

    cout << "\nmédia salarial: R$" << media << "\ntotal investido em auxílio: R$" << totau << "\ntotal investido em bonificações: R$" << totalbon;

    return 0;
}