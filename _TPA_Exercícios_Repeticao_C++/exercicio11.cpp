// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    float saliquido, salbruto, desconto, totalsalm, totalsalf, mediam, mediaf, contm, contf;
    int cod=0, horas;
    char sexo;

    cout << "\nDigite o seu código (digite 99999 para finalizar e ver a média salarial). ";
    cin >> cod;

    while(cod != 99999){

      cout << "Digite o número de horas por aula dada mensalmente. ";
      cin >> horas;


      cout << "Digite o seu sexo (M - Maculino ou F - Feminino). ";
      cin >> sexo;

      salbruto = horas * 30;

      if(sexo == 'M' or sexo == 'm'){
        desconto = 0.1 * salbruto;
        saliquido = salbruto - desconto;
        totalsalm = totalsalm + saliquido;
        contm = contm + 1;
      }
      else if(sexo == 'F' or sexo == 'f'){
        desconto = 0.05 * salbruto;
        saliquido = salbruto - desconto;
        totalsalf = totalsalf + saliquido;
        contf = contf + 1;
      }
      else{
        cout << "Opção Inválida. \n";
      }

      cout << "Código: " << cod << "\nSalário Bruto: R$" << salbruto << "\nSalário Líquido: R$" << saliquido;

    cout << "\nDigite o seu código. ";
    cin >> cod;

    }
    mediam = totalsalm / contm;
    mediaf = totalsalf / contf;
    
    cout << "\nMédia salarial masculina: R$" << mediam << "\nMédia salarial feminina: R$" << mediaf;

    return 0;
}