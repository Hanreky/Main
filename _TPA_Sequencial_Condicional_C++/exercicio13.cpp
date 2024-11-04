// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main() {
    float a, b, c, delta, raizdelta, x1, x2;
  
   cout << "Pseudocódigo que resolve equação do segundo grau.";
   cout << "\ndigite o valor de a. ";
   cin >> a;
   while(a == 0){
       cout << "a não pode ser igual a 0! \nDigite novamente. ";
       cin >> a;
   }
   cout << "digite o valor de b. ";
   cin >> b;
   cout << "digite o valor de c. ";
   cin >> c;

   delta = pow(b, 2.0) - (4*a*c);
   raizdelta = sqrt(delta);

   if(delta < 0){
    cout << "o valor não será real (delta é negativo).";
   }
   else{
    x1 = (-b + raizdelta) / (2 * a);
    x2 = (-b - raizdelta) / (2 * a);
    cout << "x¹ = " << x1 << "\nx² = " << x2;
   }

    return 0;
}