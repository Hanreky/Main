// Online C++ compiler to run C++ program online
#include <iostream>

#include <string.h>
using namespace std;

int main() {
    float n1, n2, n3, nfinal, mediaaluno, mediasala;
    int alunos, con;
    char mencao;
    
    cout << "Digite quantos alunos têm na sala. ";
    cin >> alunos;
    
    for(con = 1; con <= alunos; con++){
        
        cout << "\nDigite a nota do Trabalho de Laboratório do " << con << "° aluno. ";
        cin >> n1;
        
        cout << "\nDigite a nota da Avaliação semestral " << con << "° aluno. ";
        cin >> n2;
        
        cout << "\nDigite a nota do exame final " << con << "° aluno. ";
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

    mediasala = mediasala + mediaaluno;
   }
   
   mediasala = mediasala / alunos;
   
  
   if (mediasala <= 10 and mediasala >=8) {
      cout << "\nMédia da sala: " << mediasala << "\n Menção: MB";
   }

    if (mediasala >=7 and mediasala < 8) {
      cout << "\nMédia da sala: " << mediasala << "\n Menção: B";
   }

   if (mediasala >= 6 and mediasala < 7) {
      cout << "\nMédia da sala: " << mediasala << "\n Menção: R";
   }

      if (mediasala >= 0 and mediasala < 6) {
      cout << "\nMédia da sala: " << mediasala << "\n Menção: I";
   }

    
    return 0;
}