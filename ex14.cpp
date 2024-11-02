#include <string>
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;
int main() {
setlocale(LC_ALL, "");
int op;
   float lado1, lado2, base, base2, area, altura, tri_equilatero, tri_retangulo, tri, quadrado, retangulo, trapezio, paralelogramo, hexagono, losango, apotema, perimetro, D, d;
   cout<< "Menu de opções \n Areas: \n \n 1-Triângulo equilátero \n 2-Triângulo retângulo \n 3-Triângulo \n 4-Quadrado \n 5-Retângulo \n 6-Trapézio \n 7-Paralelogramo \n 8-Hexágono \n 9-Losango \n 0- Sair \n Escolha sua opção:";
   cin>> op; 
   if(op==0){
   	return 0;
   }
   if(op==1){
   	cout<< "Digite o lado do triangulo equilátero: ";
   	cin>> lado1;
   	tri_equilatero= ((lado1*lado1)* sqrt(3) / 4);
   	cout<< "A area do triangulo equilatero é: " <<tri_equilatero<< "\n";
   }   
   if(op==2){
   	cout<< "Digite a altura do triângulo retângulo: ";
   	cin>> altura;
   	cout<< "Digite a base do triângulo retângulo: ";
   	cin>> base;
   	tri_retangulo= base*altura;
   	cout<< "A area do triangulo retângulo é: " <<tri_retangulo<< "\n";
   }   
    if(op==3){
   	cout<< "Digite a altura do triângulo: ";
   	cin>> altura;
   	cout<< "Digite a base do triângulo: ";
   	cin>> base;
   	tri= (base*altura)/2;
   	cout<< "A area do triangulo é: " <<tri<< "\n";
   }   
   if(op==4){
   	cout<< "Digite o lado do quadrado: ";
   	cin>> lado1;
   	quadrado= (lado1*lado1);
   	cout<< "A area do quadrado é: " <<quadrado<< "\n";
   }   
   if(op==5){
   	cout<< "Digite a altura do retângulo: ";
   	cin>> altura;
   	cout<< "Digite a base do retângulo: ";
   	cin>> base;
   	retangulo= base*altura;
   	cout<< "A area do retângulo é: " <<retangulo<< "\n";
   }   
    if(op==6){
   	cout<< "Digite a altura do trapezio: ";
   	cin>> altura;
   	cout<< "Digite a base maior do trapezio: ";
   	cin>> base;
   	cout<< "Digite a base menor do trapezio: ";
   	cin>> base2;
   	trapezio=(base+base2)*altura/2;
   	cout<< "A area do trapézio é: " <<trapezio<< "\n";
   }  
   if(op==7){
   	cout<< "Digite a altura do paralelogramo : ";
   	cin>> altura;
   	cout<< "Digite a base do paralelogramo: ";
   	cin>> base;
   	tri= base*altura;
   	cout<< "A area do paralelogramo é: " <<paralelogramo<< "\n";
   }    
   if(op==8){
   	cout<< "Digite a apotema do hexágono: ";
   	cin>> apotema;
   	cout<< "Digite o lado do hexágono: ";
   	cin>> lado1;
   	perimetro=lado1*lado1;
   	hexagono=perimetro*apotema/2;
   	cout<< "A area do hexágono é: " <<hexagono<< "\n";
   }    
    if(op==9){
   	cout<< "Digite o D do losango: ";
   	cin>> D;
   	cout<< "Digite o d: ";
   	cin>> d;
    losango=(D+d)/2;
   	cout<< "A area do losango é: " <<losango<< "\n";
}

   
    return 0;
}
