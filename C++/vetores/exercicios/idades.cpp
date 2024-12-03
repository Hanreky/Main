#include <iostream>
#include <string>
#include <locale.h>
#include <iomanip>
using namespace std;

int main(){
	int qtd, i;
	float media;
	setlocale(LC_ALL, "");
	
	cout << "Digite a quantidade de pessoas: ";
	cin >> qtd;
	
	int idades[qtd], somaIdades=0;
	string nomes[qtd];
	
	for(i=0;i<qtd;i++){
	    cout << "\nDigite o " << i+1 << "º nome: ";
	    cin >> ws; 
        getline(cin, nomes[i]);
	    
		cout << "\nDigite a idade de " << nomes[i] << ":";
		cin >> idades[i];
		
		somaIdades += idades[i];
	}
	media = somaIdades / qtd;
	
	cout << "Média das idades: " << media << endl;
	for(i=0;i<qtd;i++){
	    if(idades[i] > media){
	    	cout << nomes[i] << " possui a idade acima da média. Idade: " << idades[i];
		}
	}
	return 0;
}
