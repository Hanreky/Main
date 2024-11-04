// Online C++ compiler to run C++ program online
#include <iostream>

#include <string.h>
using namespace std;

#include <math.h>

#include <cmath>

int main() {
    float r, C, A, As, An;
    
    cout << "Digite o valor do raio da circunferência. ";
    cin >> r;
    
    cout << "Digite o valor do ângulo do setor. ";
    cin >> An;
    
    C = 2 * M_PI * r;
    
    A = M_PI * pow(r, 2);
    
    As = An * M_PI * pow(r, 2) / 360;
    
    cout << "\nComprimento: " << C << "u.m. \nÁrea da circunferência: " << A << "u.m.² \nÁrea do setor: " << As << "u.m.²";

    return 0;
}