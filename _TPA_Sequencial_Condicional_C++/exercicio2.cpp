// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    float n1, n2, n3, media, falta;
    
    cout << "\nDigite a primeira nota do aluno. ";
    cin >> n1;
    
    cout << "\nDigite a segunda nota do aluno. ";
    cin >> n2;
    
    cout << "\nDigite a terceira nota do aluno. ";
    cin >> n3;
    
    media = (n1 + n2 + n3) / 3;
    
    cout << "\nMédia da nota do aluno : " << media;
    
    if(media >= 0 and media < 3){
        cout << "\nReprovado.";
    }
    else if(media >= 3 and media < 6){
        cout << "\nExame";
        falta = 6 - media;
        cout << "\nNota necessária para ser aprovado: " << falta;
    }
    else if(media >= 6 and media <= 10){
        cout << "\nAprovado. ";
    }

    return 0;
}