#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float a, b, c, delta, x, x1, x2;
	
	cout << "Programa que resolve equação do segundo grau. \nDigite o valor de a, b e c: ";
	cin >> a >> b >> c;
	
	while(a == 0){
		cout << "a não pode ser igual a 0! \nDigite o seu valor novamente: ";
		cin >> a;
		}
		
		delta = pow(b, 2) - 4 * a * c;
		
		if(delta < 0){
		  cout << "Delta negativo, nenhum resultado real.";
		  }
		  
		else if(delta == 0){
			x = (-b) / (2 * a);
			cout << "Delta = 0, somente um resultado. \nx = " << x;
		}
		
		else if(delta > 0){
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			
			cout << "x1 = " << x1 << "\nx2 = " << x2;
		}
	return 0;
	}