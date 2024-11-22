#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int qtd, i;
    float R, C, A, As, Angulo; 
    char op;

    
    cout << "Digite a quantidade de cálculos que serão realizados: ";
    cin >> qtd;

    for (i = 1; i <= qtd; i++) {
       
        cout << "\nDigite o raio da circunferência: ";
        cin >> R;

        cout << "O que você deseja calcular?\n";
        cout << "A. O comprimento de uma circunferência\n";
        cout << "B. A área de uma circunferência\n";
        cout << "C. A área do setor circular de ângulo central\n";
        cout << "Digite sua opção: ";
        cin >> op;

      
        if (op == 'A' || op == 'a') {
            C = 2 * M_PI * R;
            cout << "Comprimento da circunferência = " << C << "\n";
        } else if (op == 'B' || op == 'b') {
            A = M_PI * pow(R, 2);
            cout << "Área da circunferência = " << A << "\n";
        } else if (op == 'C' || op == 'c') {
            cout << "Digite o ângulo central do setor: ";
            cin >> Angulo;
            As = Angulo * M_PI * pow(R, 2) / 360;
            cout << "Área do setor circular = " << As << "\n";
        } else {
            cout << "Opção inválida! Tente novamente.\n";
        }
    }

    return 0;
}
