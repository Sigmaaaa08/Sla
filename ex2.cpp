#include <iostream>
#include <string>
using namespace std;
int main() {
 float nt, as, ex, media;
  cout << "Digite a nota do trabalho de laboratorio: ";
  cin >> nt;
  cout << "Digite a nota da avaliação semestral : ";
  cin >> as;
  cout << "Digite a nota do exame final: ";
  cin >> ex;
  media=nt+as+ex/3;
 if (media>=7 or media==10){
     cout << "Aprovado";
 }
 else if (media>=3 or media==7){
     cout << "Precisará fazer um exame";
 }
  else if (media>=0 or media==3){
     cout << "Reprovado";
 }
  

