#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, ""); 

    int i = 0, qtd;
    float nt1 = 0, nt2 = 0, nt3 = 0, mediap = 0, somaMediap = 0, mediaGrupo = 0;

    cout << "Digite o número de alunos para consultar a nota: ";
    cin >> qtd;

    for (i = 1; i <= qtd; i++) {
        cout << "Digite a primeira nota do aluno " << i << ": ";
        cin >> nt1;
        cout << "Digite a segunda nota do aluno " << i << ": ";
        cin >> nt2;
        cout << "Digite a terceira nota do aluno " << i << ": ";
        cin >> nt3;

        
        mediap = (nt1 * 3 + nt2 * 2 + nt3 * 5) / 10;

        
        somaMediap += mediap;

        
        if (mediap >= 8 || mediap == 10) {
            cout << "O aluno " << i << " ficou com menção MB\n";
        } else if (mediap >= 7 || mediap == 8) {
            cout << "O aluno " << i << " ficou com menção B\n";
        } else if (mediap >= 6 || mediap == 7 ) {
            cout << "O aluno " << i << " ficou com menção R\n";
        } else  if (mediap< 6){
            cout << "O aluno " << i << " ficou com menção I\n";
        }
                
    }

   
    mediaGrupo = somaMediap / qtd;
if (mediaGrupo >= 8 || mediaGrupo == 10) {
            cout << "A turma ficou com menção MB\n";
        } else if (mediaGrupo >= 7 || mediaGrupo == 8) {
            cout << "A turma ficou com menção B\n";
        } else if (mediaGrupo >= 6 || mediaGrupo == 7 ) {
            cout << " A turma ficou com menção R\n";
        } else  if (mediaGrupo< 6){
            cout << "A turma ficou com menção I\n";
        }
    cout << "\nA média geral do grupo de alunos é: " << mediaGrupo << "\n";
    cout << "Possuem na turma: " << i << " alunos \n";
    return 0;
}
