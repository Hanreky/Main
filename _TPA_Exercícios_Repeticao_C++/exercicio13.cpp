// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
	float kw, umkw, salmin = 1412, contfim, acrescimo, valorpago = 0, faturamento = 0;
     int tipo, cont = 0;
     
		cout << "Quantos quilowatts foram gastos? ";
		cin >> kw;

		do {

			cout << "Qual o tipo de consumidor (1 - Residencial, 2 - Comercial, 3 - Industrial)? ";
			cin >> tipo;

	          umkw = salmin / 80;

			switch(tipo){
				case 1:
				contfim = kw * umkw;
				acrescimo = contfim * 0.05;
				valorpago = contfim + acrescimo;
				break;

				case 2:
				contfim = kw * umkw;
				acrescimo = contfim * 0.10;
				valorpago = contfim + acrescimo;
				break;

				case 3:
				contfim = kw * umkw;
				acrescimo = contfim * 0.15;
				valorpago = contfim + acrescimo;
				break;

				default:
				cout << "Opção inválida";
				break;

				
			}
               if(valorpago > 5000 and valorpago < 10000) {
               	cont++;
               }
			
			faturamento = faturamento + valorpago;
			
			cout << "\nQuantidade de quilowatts gastos: " << kw  << "Kw"
                 << "\nValor de cada quilowatts: R$" << umkw
                 << "\nTipo de consumidor: " << tipo
                 << "\nValor total pago: R$" << valorpago;


			cout << "\nQuantos quilowatts foram gastos? ";
		     cin >> kw;

		} while(kw != 0);

		cout << "\nFaturamento total da empresa: R$" << faturamento << "\nQuantidade de consumidores que pagaram entre R$5000,00 e R$10000: " << cont;

    return 0;
}