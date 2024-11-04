// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    
   int cod, funcionarios, i, salfinal;
    float sal, aumento, gasto, media;
    
    cout << "Códigos: \n 1.Escrituário; \n 2.Secretário; \n 3.Caixa; \n 4.Gerente; \n 5.Diretor.";

    cout<< "\nDigite a quantidade de funcionários. ";
    cin >> funcionarios;

    for(i = 1; i <= funcionarios; i++){

      cout << "\nDigite o código do funcionário. ";
      cin >> cod;

      cout << "\nDigite o salário do funcionário. ";
      cin >> sal;

      switch(cod) {
        case 1: 

        aumento = 0.5 * sal;
        salfinal = sal + aumento;

        cout << "\nCargo: Escrituário \n Aumento: R$" << aumento << "\nNovo salário: R$" << salfinal;

        break;

        case 2: 

        aumento = 0.35 * sal;
        salfinal = sal + aumento;

        cout << "\nCargo: Secretária \n Aumento: R$" << aumento<< "\nNovo salário: R$" << salfinal;

        break;

        case 3: 

        aumento = 0.2 * sal;
        salfinal = sal + aumento;

        cout << "\nCargo: Caixa \n Aumento: R$" << aumento << " \nNovo salário: R$" << salfinal;

        break;

        case 4: 

        aumento = 0.1 * sal;
        salfinal = sal + aumento;

        cout << "\nCargo: Gerente \n Aumento: R$" << aumento << "\nNovo salário: R$" << salfinal;

        break;

        case 5: 

        aumento = 0 * sal;
        salfinal = sal + aumento;

        cout << "\nCargo: Diretor \n Aumento: R$" << aumento << "\nNovo salário: R$" << salfinal;

        break;

        default:

        cout << "Código inválido!";

        break;


      }
              gasto = gasto + salfinal;
    }
       media = gasto / funcionarios;

    cout << "\nGasto total da empresa: R$" << gasto << "\nMédia salarial da empresa: R$" << media;



    return 0;
}