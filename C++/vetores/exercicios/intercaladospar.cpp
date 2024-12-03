#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "");
	int qtd, i, j=0, vet1[10], vet2[10], vet3[20];
	
	for(i=0;i<10;i++){
		
		cout << "\nDigite o " << (i+1) << "º numero do vetor 1: ";
		cin >> vet1[i];
		vet3[j] = vet1[i];
		j++;
			
		cout << "Digite o " << (i+1) << "º numero do vetor 2: ";
		cin >> vet2[i];
		vet3[j] = vet2[i];
		j++;
	
	}
	cout << "\n---Números pares intercalados---";
    for(i=0;i<20;i++){
    	if(vet3[i] % 2 == 0){
    	cout << "\n" << vet3[i];
    }
	}
     return 0;
}
