//2. Faça um algoritmo que receba o raio (R) e a escolha do usuário de acordo com as opções (A, B, C), 

//calcule e mostre:

//a. O comprimento de uma circunferência; ( C = 2 *pi * R )

//b. A área de uma circunferência ( A = pi * R² )

//c. A área do setor circular de ângulo central ( As = a * pi * R² / 360 )



#include <math.h>

#include <iostream>

using namespace std;

int main() {

    float R, C, A, As, Angulo; 

    char op; 

    cout<< "Digite o Raio da circunferência: " "\n";

    cin>> R;

    cout<< "O que você deseja calcular? \n A. O comprimento de uma circunferência; \n B. A área de uma circunferência; \n C. A área do setor circular de ângulo central \n Digite sua opção: "; 

    cin>> op;

    if(op=='A' || 'a'){

    //comprimento da circunferência:

    C = 2 * M_PI * R;

    cout<< "Circunferência = "  << C << "\n";

        

    }

    //Area da circunferência:

    else if(op=='B' || 'b'){

    A = M_PI * pow(R, 2); 

    cout<< "Area da circunferência= "  << A << "\n";

        

    }

    //Area do setor circular de ângulo central:

 else if (op=='C' || 'c'){

    cout<< "Digite o ângulo central do setor" "\n";

    cin>> Angulo;

    As= Angulo * M_PI * pow(R, 2)/360;

}

cout<< " Area do setor do angulo central= "  << As << "\n";

    return 0;

}
