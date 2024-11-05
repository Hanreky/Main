// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

float mediar(float n1, float n2, float n3){ // Estou treinando como fazer funções
    return (((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10);
}
int main() {
    float n1, n2, n3, media;
    
    cout << "Digite a nota do trabalho de laboratório: ";
    cin >> n1;
    
    cout << "Digite a nota da avaliação semestral: ";
    cin >> n2;
    
    cout << "Digite a nota do exame final: ";
    cin >> n3;
    
    media = mediar(n1, n2, n3);

    cout << media << "\n";
    
    if (media <= 10 && media >= 8){
        printf("MB");
    }
    else if (media < 8 && media > 7){
        printf("B");
    }
    else if (media < 7 && media >= 6){
        printf("R");
    }
    else if (media < 6 && media > 0){
        printf("I");
    }
    else {
        printf("nota inválida. ");
    }
    return 0;
}