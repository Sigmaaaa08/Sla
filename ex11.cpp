#include <string>
#include <iostream>
using namespace std;
int main() {
int op;
double imp5=0.05, imp10=0.1, imp15=0.15;
float salario, novo_salario, aumento, imposto;
cout<< "Menu de opções: \n1-Imposto; \n 2-Novo Salario \n 3-Classificação \n ";
cin>> op;
cout<< "Informe seu salario: ";
cin>> salario;
if(op==1){
if(salario<=500){
    imposto=salario*imp5;
    cout<<"Imposto é de R$" <<imposto<< "\n";
}   
if(salario>500 and salario==850 ){
    imposto=salario*imp10;
    cout<<"Imposto é de R$" <<imposto<< "\n";
}   
 if(salario>850){
     imposto=salario*imp15;
    cout<<"Imposto é de R$" <<imposto<< "\n";
 }
}
 if(op==2){
     if(salario<450){
         aumento=100;
         novo_salario=salario+aumento;
         cout<< "Seu novo salario é de R$" <<novo_salario<< "\n";
     }
     
     if(salario>=450 and salario==750){
         aumento=75;
         novo_salario=salario+aumento;
         cout<< "Seu novo salario é de R$" <<novo_salario<< "\n";
     }
     
      if(salario>=750 and salario==1500){
         aumento=50;
         novo_salario=salario+aumento;
         cout<< "Seu novo salario é de R$" <<novo_salario<< "\n";
     }
     
      if(salario>1500){
         aumento=25;
         novo_salario=salario+aumento;
         cout<< "Seu novo salario é de R$" <<novo_salario<< "\n";
     }
 }


 if(op==3){
 	if(salario>=700){
 		cout<< "Bem renumerado";
	 }
 	
 	else{
 		cout<< "Mal renumerado";
	 }
 	
 }
 
   
    return 0;
}