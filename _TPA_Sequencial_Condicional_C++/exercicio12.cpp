// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    float salmin=1412, nhoras, filhos, dependentes, hextras, valorh, salmes, salbru, valorhextra, irrf, sal_liqui, sal_receber, gratificacao;

    cout << "Digite o seu número de horas trabalhadas: ";
    cin >> nhoras;

    cout << "Digite a sua quantidade de dependentes (filhos): ";
    cin >> dependentes;

    cout << "Digite a quantidade de horas extras trabalhadas: ";
    cin >> hextras;

    valorh = salmin / 30;
    salmes = nhoras * valorh;
    filhos = dependentes * 32;
    valorhextra = hextras * (valorh * 1.5);
    salbru = salmes + filhos + valorhextra;

    if (salbru < 2000) {
        irrf = 0;
    } else if (salbru >= 2000 and salbru <= 5000) {
        irrf = salbru * 0.1;
    } else {
        irrf = salbru * 0.2;
    }

    sal_liqui = salbru - irrf;

    if (sal_liqui <= 3500) {
        gratificacao = 500;
    } else {
        gratificacao = 250;
    }

    sal_receber = sal_liqui + gratificacao;

    cout << "O salário que você irá receber será de R$ " << sal_receber;

    return 0;
}
