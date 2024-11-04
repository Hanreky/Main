// Online C++ compiler to run C++ program online

#include <iostream>
using namespace std;

int main() {
    int codigo;
    float salario1, percentual, salario_final;

    cout << "\n 1.Escriturário \n 2.Secretário \n 3.Caixa \n 4. Gerente \n 5.Diretor.";

    cout << "\nDigite o seu código correspondente: ";
    cin >> codigo;

    cout << "Digite o seu salário atual: ";
    cin >> salario1;

    switch (codigo) {
        case 1:
            percentual = salario1 * 0.50;
            salario_final = salario1 + percentual;
            cout << "O seu salário aumentou para R$" << salario_final;
        break;

        case 2:
            percentual = salario1 * 0.35;
            salario_final = salario1 + percentual;
            cout << "O seu salário aumentou para R$" << salario_final;
        break;

        case 3:
            percentual = salario1 * 0.20;
            salario_final = salario1 + percentual;
            cout << "O seu salário aumentou para R$" << salario_final;
        break;

        case 4:
            percentual = salario1 * 0.10;
            salario_final = salario1 + percentual;
            cout << "O seu salário aumentou para R$" << salario_final;
         break;

        case 5:
            cout << "Não houve aumento, o salário continua sendo R$" << salario1;
        break;

        default:
            cout << "Opção de código inválida!";
         break;
    }

    return 0;
}