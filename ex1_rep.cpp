//Faça um algoritmo que receba o raio (R) , calcule e mostre:
//a. O comprimento de uma circunferência; ( C = 2 *pi * R )
//b. A área de uma circunferência ( A = pi * R² )
//c. A área do setor circular de ângulo central ( As = a * pi * R² / 360 ângulo=?
#include <math.h>
#include <iostream>
using namespace std;
int main() {
    float R, C, A, As, Angulo; 
    cout<< "Digite o Raio da circunferência: " "\n";
    cin>> R;
    //comprimento da circunferência:
    C = 2 * M_PI * R;
    cout<< "Circunferência = "  << C << "\n";
    //Area da circunferência:
    A = M_PI * pow(R, 2); 
    cout<< "Area da circunferência= "  << A << "\n";
    //Area do setor circular de ângulo central:
    cout<< "Digite o ângulo central do setor" "\n";
    cin>> Angulo;
    As= Angulo * M_PI * pow(R, 2)/360;
cout<< " Area do setor do angulo central= "  << As << "\n";
    return 0;
}
