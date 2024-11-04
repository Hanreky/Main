// Online C++ compiler to run C++ program online

#include <iostream>
using namespace std;

int main() {
    float sal1, salbon, salau, salario_final;

    cout << "Pseudocódigo que recebe o seu salário e calcula o novo salário com bonificação e auxílio escola.\n";

    cout << "\nDigite o seu salário: ";
    cin >> sal1;

    if (sal1 < 500) {
        salbon = sal1 * 0.05;
        salario_final = sal1 + salbon + 150;
        cout << "O seu salário final é: R$" << salario_final;
    }

    if (sal1 >= 500 && sal1 <= 1200) {
        salbon = sal1 * 0.12;
        if (sal1 < 600) {
            salau = 150;
        } else {
            salau = 100;
        }
        salario_final = sal1 + salbon + salau;
        cout << "O seu salário final é: R$" << salario_final;
    }

    if (sal1 > 1200) {
        salario_final = sal1 + 100;
        cout << "O seu salário final é: R$" << salario_final;
    }

    return 0;
}
