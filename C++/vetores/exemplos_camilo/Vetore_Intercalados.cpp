//Preenche 2 vetores de 10 "numeros"
// e mostre o vetor resultante da intercalação deles.
#include <iostream>
#include <conio.h>
#include <locale.h> // Necessário para setlocale

using namespace std;

int main() {
	setlocale(LC_ALL, ""); 
	int vet1[10], vet2[10], vet3[20], i, j;
	
	j = 0;
	for (i=0;i<10;i++)
	{ cout << "\nDigite o " << (i+1) << "º numero do vetor 1: ";
		cin >> vet1[i];
		vet3[j] = vet1[i];
		j++;
	//}for (i=0;i<10;i++){
	
		cout << "Digite o " << (i+1) << "º numero do vetor 2: ";
		cin >> vet2[i];
		vet3[j] = vet2[i];
		j++;
	}
	cout << "\n\nVetor intercalado";
	
	for (i=0;i<20;i++)
			cout << "\n" << vet3[i];
	
	return 0;
}
