#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main() {
	int N, idade, i, infantil=0, juvenil=0, adulto=0;
	
    string classificacao;
    
    setlocale(LC_ALL, "");
    
    cout << "Digite a quantidade de participantes: ";
    cin >> N;
    
    for(i = 1; i <= N; i++){
    	
    	cout << "\nDigite a idade do participante " << i << ": ";
    	cin >> idade;
    	
    	while(idade < 0){
		cout << "\nIdade inválida. Digite novamente: ";
    	cin >> idade;
		}
    	
        if(idade <= 12){
        	classificacao="Infantil";
        	infantil++;
        	cout << "\nClassificação: " << classificacao;
		}
		else if(idade > 12 && idade < 17){
			classificacao = "Juvenil";
			juvenil++;
			cout << "\nClassificação: " << classificacao;
			
		}
		else if(idade >= 18){
			classificacao = "Adulto";
			adulto++;
			cout << "\nClassificação: " << classificacao;
		}
    }
    cout << "\nTotal de participantes: " << N;
    cout << "\nParticipantes infantis: " << infantil;
    cout << "\nParticipantes juvenis: " << juvenil;
    cout << "\nParticipantes adultos: " << adulto;

    return 0;
}
