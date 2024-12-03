#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main() {
	int N, i;
	char sn;
    
    setlocale(LC_ALL, "");
    
    cout << "Digite a quantidade de participantes: ";
    cin >> N;
    
    int idades[N], infantil=0, juvenil=0, adulto=0;
    
    string classificacaos[N], nomes[N];
    
    for(i = 0; i < N; i++){
    	
    	cout << "\nDigite o nome do participante " << i+1 << ": ";
    	cin >> ws;
    	getline(cin, nomes[i]);
    	
    	cout << "\nDigite a idade de " << nomes[i] << ": ";
    	cin >> idades[i];
    	
    	while(idades[i] < 0){
		cout << "\nIdade inválida. Digite novamente: ";
    	cin >> idades[i];
		}
    	
        if(idades[i] <= 12){
        	classificacaos[i]="Infantil";
        	infantil++;
		}
		else if(idades[i] > 12 && idades[i] < 17){
			classificacaos[i] = "Juvenil";
			juvenil++;
			
		}
		else if(idades[i] >= 18){
			classificacaos[i] = "Adulto";
			adulto++;
		}
    }
    cout << "\nTotal de participantes: " << N;
    cout << "\nParticipantes infantis: " << infantil;
    cout << "\nParticipantes juvenis: " << juvenil;
    cout << "\nParticipantes adultos: " << adulto;
    
    cout << "\nDeseja consultar a classificação dos participantes (S/N)? ";
    cin >> sn;
    
    if(sn == 'S'){
    	for(i=0;i<N;i++){
    		cout << "\n---" << nomes[i] << "---";
    		cout << "\n" << classificacaos[i];
		}
	}
	else{
		cout << "\nSaindo...";
	}
    return 0;
}
