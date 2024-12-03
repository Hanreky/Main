#include <iostream>
#include <string>
#include <locale.h>
#include <iomanip>
using namespace std;

int main(){
	setlocale(LC_ALL, "");
	int qtd;
	
	cout << "Digite a quantidade de alunos: ";
	cin >> qtd;
	
	int provas1[qtd], provas2[qtd], provas3[qtd], i;
	float medias[qtd];
	string nomes[qtd];
	
	for(i=0;i<qtd;i++){
	cout << "Digite o nome do " << i+1 << "º aluno: ";
	cin >> ws; // Limpa o buffer para leitura do nome
    getline(cin, nomes[i]);
	cout << "Digite a nota da prova 1 de " << nomes[i] << ": ";
	cin >> provas1[i];
	cout << "Digite a nota da prova 2 de " << nomes[i] << ": ";
	cin >> provas2[i];
	cout << "Digite a nota da prova 3 de " << nomes[i] << ": ";
	cin >> provas3[i];
	
	
	medias[i] = (provas1[i] + provas2[i] + provas3[i]) / 3;
	}
	
	for(i=0;i<qtd;i++){
		cout << "\n---"<< nomes[i] << "---\n";
		cout << "Prova 1: " << provas1[i] << "\nProva 2: " << provas2[i] << "\nProva 3: " << provas3[i];
		cout << "\nMédia das notas: " << medias[i];
		if(medias[i]<6){
			cout << "\nReprovado.";
		}
		else{
			cout << "\nAprovado.";
		}
	}
	return 0;
}
