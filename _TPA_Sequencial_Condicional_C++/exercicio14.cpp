// Online C++ compiler to run C++ program online
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main() {
    float l, area, h, b, bmenor, bmaior, dmaior, dmenor;
    int opcao;

    cout << "Menu de opções: \n 1.Triângulo equilátero \n 2.Triângulo retângulo \n 3.Triângulo \n 4.Quadrado \n 5.Retângulo \n 6.Trapézio \n 7.Paralelogramo \n 8.Hexágono \n 9.Losango \n 0.Sair";
    cout << "\n digite a sua opção desejada. ";
    cin >> opcao;
    
    switch(opcao) {
    case 1: {
cout << "\n digite o valor do lado. ";
cin >> l;
area = pow(l, 2.0) * sqrt(3) / 4;
cout << "O resultado da área é igual a:" << area << " u.m.²";
}
break;

case 2: {
cout << "\n digite o valor da base. ";
cin >> b;

cout << "\n digite o valor da altura. ";
cin >> h;

area = (b * h) / 2;
cout << "O resultado da área é igual a: " << area << " u.m.²";
}
break;

case 3:{
cout << "\n digite o valor da base. ";
cin >> b;

cout << "\n digite o valor da altura. ";
cin >> h;

area = (b *h) /2;
cout << "O resultado da área é igual a: " << area << " u.m.²";
}
break;

case 4: {
            cout << "\nDigite o valor do lado: ";
            cin >> l;
            area = pow(l, 2.0);
            cout << "O resultado da área é igual a: " << area << " u.m²";
            break;
        }

        case 5: {
            cout << "\nDigite o valor da base: ";
            cin >> b;
            cout << "\nDigite o valor da altura: ";
            cin >> h;
            area = b * h;
            cout << "O resultado da área é igual a: " << area << " u.m²";
            break;
        }

        case 6: {
            cout << "\nDigite o valor da base maior: ";
            cin >> bmaior;
            cout << "\nDigite o valor da base menor: ";
            cin >> bmenor;
            cout << "\nDigite o valor da altura: ";
            cin >> h;
            area = ((bmaior + bmenor) * h) / 2;
            cout << "O resultado da área é igual a: " << area << " u.m²";
            break;
        }

        case 7: {
            cout << "\nDigite o valor da altura: ";
            cin >> h;
            cout << "\nDigite o valor da base: ";
            cin >> b;
            area = (b * h) / 2;
            cout << "O resultado da área é igual a: " << area << " u.m²";
            break;
        }

        case 8: {
            cout << "\nDigite o valor do lado: ";
            cin >> l;
            area = (3 * pow(l, 2.0) * sqrt(3)) / 2;
            cout << "O resultado da área é igual a: " << area << " u.m²";
            break;
        }

        case 9: {
            cout << "\nDigite o valor da diagonal maior: ";
            cin >> dmaior;
            cout << "\nDigite o valor da diagonal menor: ";
            cin >> dmenor;
            area = (dmaior * dmenor) / 2;
            cout << "O resultado da área é igual a: " << area << " u.m²";
            break;
        }

        case 0: {
            cout << "Saindo...";
            break;
        }

        default: {
            cout << "Opção inválida.\n";
            break;
        }
    }
    return 0;
}