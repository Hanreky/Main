// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int opcao;
    float sal, imposto, salfinal;

    cout << "\nMenu de opções: \n1. Imposto \n2. Novo salário \n3. Classificação\n";

    cout << "\nDigite a sua opção desejada (1, 2 ou 3): ";
    cin >> opcao;

    cout << "\nDigite o seu salário: ";
    cin >> sal;

    if (opcao == 1) {
        if (sal < 500) {
            imposto = sal * 0.05;
        } else if (sal >= 500 and sal <= 850) {
            imposto = sal * 0.10;
        } else {
            imposto = sal * 0.15;
        }
        cout << "\nO imposto foi de R$ " << imposto;
    }

    if (opcao == 2) {
        if (sal > 1500) {
            salfinal = sal + 25;
        } else if (sal >= 750 and sal <= 1500) {
            salfinal = sal + 50;
        } else if (sal >= 450 and sal < 750) {
            salfinal = sal + 75;
        } else {
            salfinal = sal + 100;
        }
        cout << "O salário aumentou para R$ " << salfinal;
    }

    if (opcao == 3) {
        if (sal <= 700) {
            cout << "Mal remunerado.";
        } else {
            cout << "Bem remunerado." ;
        }
    }

    return 0;
}
