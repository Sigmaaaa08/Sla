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
  media=(nt+as+ex)/2+3+5;
 if (media>=8 or media==10){
     cout << "Menção MB";
 }
 else if (media>=7 or media==8){
     cout << " Menção B";
 }
  else if (media>=6 or media==7){
     cout << "Menção R";
 }
  else if (media>=0 or media==6){
     cout << "Menção I";
 }




  






return 0;
}