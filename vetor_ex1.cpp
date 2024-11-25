#include <iostream>
#include <locale.h>
using namespace std;

int main() {
setlocale(LC_ALL, " " );
    int n[10] , cont = 0, i; 

    cout << "Digite 10 números inteiros:\n";
    for (int i = 1; i < 11; i++) {
        cout << "Número " << i << ": ";
        cin >> n[i];
    }

    for ( i = 0; i < 11; i++) {
        if (n[i] > 50) {
            cout << "Número: " << n[i] << ", Localização: " << i << "\n";
            cout << "Números maiores que 50 e suas posições:\n";
            cont++; 
        }
    }

    if (cont == 0) {
        cout << "Nenhum número maior que 50 foi encontrado.\n";
    }

    return 0;
}
