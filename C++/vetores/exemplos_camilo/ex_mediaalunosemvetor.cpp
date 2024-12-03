#include <iostream>
#include <string>
#include <iomanip>
#include <locale.h> //acentos

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    int quantidadeAlunos,i;

    // Solicita a quantidade de alunos
    cout << "Digite a quantidade de alunos: ";
    cin >> quantidadeAlunos;

    // Declara os vetores para armazenar os dados
    string nomes;
    float notas1;
    float notas2;
    float medias;
    float somaMedias = 0.0;
     float mediaTurma=0.0;

    // Recebe os dados de cada aluno
    for (int i = 0; i < quantidadeAlunos; i++) {
        cout << "\nDigite o nome do aluno " << i + 1 << ": ";
        cin >> nomes; // Limpa o buffer para leitura do nome
      //  getline(cin, nomes[i]);

        cout << "Digite a primeira nota de " << nomes << ": ";
        cin >> notas1;

        cout << "Digite a segunda nota de " << nomes << ": ";
        cin >> notas2;

        // Calcula a média do aluno
        medias = (notas1+ notas2) / 2.0;
        somaMedias += medias;
        cout << "Aluno: " << nomes << " | Nota 1: " << notas1
             << " | Nota 2: " << notas2 << " | Média: " << medias << endl;
    
    

    // Calcula a média da turma
     mediaTurma = somaMedias / quantidadeAlunos;

    }

    // Exibe a média da turma
    cout << "\nMédia da turma: " << mediaTurma << endl;

    return 0;
}
