// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    float sal;
    int funcionarios, i, op, cont5=0, cont10=0, cont15=0, cont25=0, cont50=0, cont75=0, cont100=0, contbem=0, contmal=0, totalimp=0, imposto=0, salfinal=0, aumento=0, total25=0, total50=0, total75=0, total100=0, totau=0;

    cout << "\nDigite a quantidade de funcionários. ";
    cin >> funcionarios;

    for(i = 1; i <= funcionarios; i++) {

      cout << "\nMenu de opções: \n 1. Imposto \n 2. Novo salário \n 3. Classificação \nDigite a opção desejada. ";
      cin >> op;

    switch(op) {
      case 1:

      cout << "Digite o seu salário. ";
      cin >> sal;
      
      if(sal < 500) {
       imposto = sal * 0.05;
       cont5 = cont5 + 1;
      }
      else if(sal >= 500 and sal <= 850) {
        imposto = sal * 0.1;
        cont10 = cont10 + 1;
      }
      else if(sal > 850) {
        imposto = sal * 0.15;
        cont15 = cont15 + 1;
      }
      cout << "Imposto: R$" << imposto;
      break;

      case 2:
      cout << "Digite o seu salário. ";
      cin >> sal;

     if(sal > 1500) {
      aumento = 25;
      salfinal = sal + aumento;
      cont25 = cont25 + 1;
     }
      else if(sal >= 750 and sal <= 1500 ) {
        aumento = 50;
      salfinal = sal + aumento;
      cont50 = cont50 + 1;
     }
       else if(sal >= 450 and sal < 750) {
        aumento = 75;
      salfinal = sal + aumento;
      cont75 = cont75 + 1;
     }
       else if(sal < 450) {
        aumento = 100;
      salfinal = sal + aumento;
      cont100 = cont100 + 1;
     }
       cout << "O salário aumentou para R$ " << salfinal;
       break;

       case 3:
      
       cout << "Digite o seu salário. ";
       cin >> sal;

       if(sal <= 700) {
       cout << "Mal remunerado.";
       contmal = contmal + 1;
       }
       else if(sal > 700) {
       cout << "Bem remunerado.";
       contbem = contbem + 1;
       }
       break;
       
       default:
       cout << "Opção Inválida!";
       break;
     }
     totalimp = totalimp + imposto;
     totau = totau + aumento;
    }
    total25 = cont25 * 25;
    total50 = cont50 * 50;
    total75 = cont75 * 75;
    total100 = cont100 * 100;

cout << "\nPagaram 5% de imposto: " << cont5 
     << "\nPagaram 10% de imposto: " << cont10 
     << "\nPagaram 15% de imposto: " << cont15 
     << "\nTotal de imposto pago: R$" << totalimp 
     << "\nAumento de R$25: " << cont25 
     << "\nSoma total de R$25: " << total25 
     << "\nAumento de R$50: " << cont50 
     << "\nSoma total de R$50: " << total50 
     << "\nAumento de R$75: " << cont75 
     << "\nSoma total de R$75: " << total75 
     << "\nAumento de R$100: " << cont100 
     << "\nSoma total de R$100: " << total100 
     << "\nTotal pago de aumento: R$" << totau 
     << "\nQuantidade de salários bem remunerados: " << contbem 
     << "\nQuantidade de salários mal remunerados: " << contmal;

    return 0;
}