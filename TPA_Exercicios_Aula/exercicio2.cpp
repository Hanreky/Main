// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

float mediar(float n1, float n2, float n3){
    return (n1 + n2 + n3) / 3;
}

int main() {
    float n1, n2, n3, media;
    
    cout << "Digite a primeia nota: ";
    cin >> n1;
    
    while (n1 < 0 or n1 > 10){
        cout << "Digite a primeia nota novamente(1-10): ";
        cin >> n1;
    }
    
    cout << "Digite a segunda nota: ";
    cin >> n2;
    
    while (n2 < 0 or n2 > 10){
        cout << "Digite a segunda nota novamente(1-10): ";
        cin >> n2;
    }
    
    cout << "Digite a terceira nota: ";
    cin>> n3;
    
    while (n3 < 0 or n3 > 10){
        cout << "Digite a terceira nota novamente(1-10): ";
        cin >> n3;
    }
    
    media = mediar(n1, n2, n3);
    cout << "média: " << media << "\n";
    
    if(media >= 0 and media < 3){
        printf("Reprovado.");
    }
    else if(media >= 3 and media < 7){
        printf("Exame. ");
        if(media < 6){
            cout << "\nFalta " << 6 - media << " para ser aprovado. ";
        }
    }
    else if(media >= 7 and media <= 10){
        printf("Aprovado.");
    }
    
    return 0;
}