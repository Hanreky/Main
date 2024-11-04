// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;


int main() {
    float n1, n2, n3, nfinal, mediaaluno, mediasala;
    int alunos, con;
    char mencao;
    
        cout << "\nDigite a nota do Trabalho de Laboratório do aluno. ";
        cin >> n1;
        
        cout << "\nDigite a nota da Avaliação semestral do aluno. ";
        cin >> n2;
        
        cout << "\nDigite a nota do exame final do aluno. ";
        cin >> n3;
        
        mediaaluno = (n1 * 2 + n2 * 3 + n3 * 5) / 10;
        
        cout << "\nMédia do aluno: " << mediaaluno;
        
              if (mediaaluno <= 10 and mediaaluno >=8) {
      cout << " \nMenção: MB";
   }

      else if (mediaaluno >=7 and mediaaluno < 8) {
      cout << "\n Menção: B";
   }

   else if (mediaaluno >= 6 and mediaaluno < 7) {
      cout << "\n Menção: R";
   }

      else if (mediaaluno >= 0 and mediaaluno < 6) {
      cout << "\n Menção: I";
   }

    return 0;
}