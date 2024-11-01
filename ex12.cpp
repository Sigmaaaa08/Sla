#include <string>
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;
int main() {
setlocale(LC_ALL, "");
    float a, b, c, x, x1, x2, delta;
    cout<< "Digite o valor de a: ";
    cin>> a;
    cout<< "Digite o valor de b: ";
    cin>> b;
    cout<< "Digite o valor de c: ";
    cin>> c;
    delta=(b*b)-4*a*c;
    if(delta<=0){
	
     cout<< "Valor de delta invalido, para os numeros reais.";
}
else{
     x1= ((b*-1) + sqrt(x))/2 * a;   
     x2= ((b*-1) - sqrt(x))/2 * a; 
	 cout<< "x1 é "  <<x1 <<endl;
	 cout<< "x2 é "  <<x2 <<endl;
		 }
    return 0;
}
