#include <iostream>
#include <locale.h>
using namespace std;
int main() {
setlocale(LC_ALL, "");
    int i, qtd, nt1=2, nt2=3, nt3=5;
    float x = 0, y = 0, z = 0, mediap;

    cout << "Digite o numero de alunos para consultar a nota: ";
    cin >> qtd;
    for (i = 1; i <= qtd ; i++){
    cout << "Digite a primeira nota do aluno " <<i<< ": ";
    cin>> x ;
        cout << "Digite a segunda nota do aluno " <<i<<": ";
        cin>> y ;
        cout << "Digite a terceira nota do aluno " <<i<<": " ;
        cin>> z;
        
        //media ponderada:
        mediap = x + y + z / nt1 + nt2 + nt3 ;
        
 if (mediap>=8 || media==10){
     cout << "O aluno" <<i<< "ficou com" "menção MB";
 }
 else if (mediap>=7 ||  media==8){
     cout << "O aluno" <<i<< "ficou com" "menção B";
 }
  else if (mediap>=6 || media==7){
    cout << "O aluno" <<i<< "ficou com" "menção R";
 }
  else if (mediap>=0 || media==6){
    cout << "O aluno" <<i<< "ficou com" "menção I";
 }

        
    return 0;
}
