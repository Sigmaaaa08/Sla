#include <iostream>
#include <string>
using namespace std;
int main() {
    int codigo;
    float aumento, salario, novo_salario, auxilio1=150, auxilio2=100;
    double porcent5=0.05, porcent12=0.12;
   cout<< "Informe seu salario: ";
   cin>> salario;
   if(salario<=500){
       novo_salario=(salario*porcent5)+salario;
       cout<< "Seu novo salario é de R$"<<novo_salario<< "\n";
   }
    if(salario<=600){
       novo_salario=(salario*porcent5)+salario+auxilio1;
       cout<< "com auxilio estudante, e bonifações, seu salario, é de R$"<<novo_salario<< "\n";
   }
   if(salario>=500 and salario==1200){
       novo_salario=(salario*porcent12)+salario;
       cout<< "Seu novo salario é de R$"<<novo_salario<< "\n";
   }
    if(salario>=600){
       novo_salario=(salario*porcent5)+salario+auxilio2;
       cout<< "com auxilio estudante, seu salario é de R$"<<novo_salario<< "\n";
   }

    if(salario>=1200){
       cout<< "Seu salario não possui bonificações, apenas auxilio escola \n" ; 
           
   }
   
    
    return 0;
}