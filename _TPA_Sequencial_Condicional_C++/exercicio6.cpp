// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    float hora_inicio, minuto_inicio, hora_final, minuto_final, duracao_hora, duracao_minuto;
    
cout << "Digite a hora do início: ";
cin >> hora_inicio;
while (hora_inicio < 0 or hora_inicio > 23) {
    cout << "\nHora inválida! Máximo de 23. Digite novamente. ";
    cin >> hora_inicio;
}

cout << "Digite o minuto do início: ";
cin >> minuto_inicio;
while (minuto_inicio < 0 or minuto_inicio >= 60) {
    cout << "Minuto inválido! Máximo de 59! Digite novamnte.  ";
    cin >> minuto_inicio;
}

cout << "Digite a hora de fim: ";
cin >> hora_final;
while (hora_final < 0 or hora_final > 23) {
    cout << "\nHora inválida! Máximo de 23. Digite novamente. ";
    cin >> hora_final;
}

cout << "Digite o minuto de fim: ";
cin >> minuto_final;
while (minuto_final < 0 or minuto_final >= 60) {
    cout << "Minuto inválido! Máximo de 59! Digite novamnte.  ";
    cin >> minuto_final;
}

if(hora_inicio < hora_final){
    duracao_hora = hora_final - hora_inicio;
    }
else if(hora_final < hora_inicio){
    duracao_hora = (24 - hora_inicio) + hora_final;
    }
if(minuto_inicio < minuto_final){
duracao_minuto = minuto_final - minuto_inicio;
}
else if(minuto_final < minuto_inicio){
    duracao_minuto = (60 - minuto_inicio) + minuto_final;
    }

cout << "a duração do jogo é " << duracao_hora << "h e " << duracao_minuto << "min.";
    return 0;
}