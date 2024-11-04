// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
     int idade, cont_f=0, cont_ms, cont_fvinteum=0, menor_idade = 200;
     char sexo, experiencia;
     float media=0, soma_ida=0, cont_m=0, cont_per=0, percentagem=0;

		cout << "Digite a sua idade. ";
		cin >> idade;

		while(idade != 0) {

		cout << "Digite o seu sexo (F ou M). ";
		cin >> sexo;

		cout << "Você possui experiência no serviço (S ou N)? ";
		cin >> experiencia;

		if(sexo == 'F' or sexo == 'f') {
			cont_f = cont_f + 1 ;
			if(experiencia == 'S' or experiencia == 's') {
				if( idade < 21) {
				cont_fvinteum = cont_fvinteum + 1;
				}
				if(idade < menor_idade) {
					menor_idade = idade;
				}
			}
		 }

		else if(sexo == 'M' or sexo == 'm') {
			cont_m = cont_m + 1;
			if(experiencia == 'S' or experiencia == 's') {
				soma_ida = soma_ida + idade;
			}
			if(idade > 45) {
				cont_per = cont_per + 1;
				percentagem = (cont_per / cont_m) * 100;
			}
		  }

		  cout << "Digite a sua idade. ";
		cin >> idade;
		}
		media = soma_ida / cont_m;

cout << "Número de candidatos femininos: " << cont_f
     << "\nNúmero de candidatos masculinos: " << cont_m
     << "\nIdade média de homens que já têm experiência no serviço: " << media
     << "\nPercentagem de homens com mais de 45 anos: " << percentagem << "%"
     << "\nNúmero de mulheres com idade inferior a 21 anos e com experiência: " << cont_fvinteum
     << "\nMenor idade entre mulheres com experiência: " << menor_idade;

    return 0;
}