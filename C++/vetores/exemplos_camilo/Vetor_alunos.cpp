/* 
Criar um programa para o Dev C++, que receba 
a quantidade de alunos de uma sala, o nome do aluno,
duas notas, calcule a m�dia do aluno e a m�dia da sala 
e mostre as notas de todos os alunos. 
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <locale.h> //acentos

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    int quantidadeAlunos;

    // Solicita a quantidade de alunos
    cout << "Digite a quantidade de alunos: ";
    cin >> quantidadeAlunos;

    // Declara os vetores para armazenar os dados
    string nomes[quantidadeAlunos];
    float notas1[quantidadeAlunos];
    float notas2[quantidadeAlunos];
    float medias[quantidadeAlunos];
    float somaMedias = 0.0;

    // Recebe os dados de cada aluno
    for (int i = 0; i < quantidadeAlunos; i++) {
        cout << "\nDigite o nome do aluno " << i + 1 << ": ";
        cin >> ws; // Limpa o buffer para leitura do nome
        getline(cin, nomes[i]);

        cout << "Digite a primeira nota de " << nomes[i] << ": ";
        cin >> notas1[i];

        cout << "Digite a segunda nota de " << nomes[i] << ": ";
        cin >> notas2[i];

        // Calcula a m�dia do aluno
        medias[i] = (notas1[i] + notas2[i]) / 2.0;
        somaMedias += medias[i];
    }

    // Calcula a m�dia da turma
    float mediaTurma = somaMedias / quantidadeAlunos;

    // Exibe as notas e as m�dias dos alunos
    cout << fixed << setprecision(2);
    cout << "\n--- Notas e m�dias dos alunos ---\n";
    for (int i = 0; i < quantidadeAlunos; i++) {
        cout << "Aluno: " << nomes[i] << " | Nota 1: " << notas1[i]
             << " | Nota 2: " << notas2[i] << " | M�dia: " << medias[i] << endl;
    }

    // Exibe a m�dia da turma
    cout << "\nM�dia da turma: " << mediaTurma << endl;

    return 0;
}
