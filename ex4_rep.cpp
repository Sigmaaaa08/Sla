#include <iostream>
#include <locale.h>
using namespace std;
int main() {
setlocale(LC_ALL, "");
    int i, qtd;
    float n;
    cout << "Digite o numero que voce deseja construir a tabuada: ";
    cin >> n;
    cout << "Quantidade de vezes para multiplicar: ";
    cin>> qtd;
    for (i = 1; i <= qtd ; i++){
    cout << n << " x " << i << " = " << n * i << "\n";
        
    }
    return 0;
}
