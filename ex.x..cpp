#include <iostream>
#include <string>
using namespace std;
int main() {
 float rb, salario;
  string nome;
   cout << "Digite o nome do funcionario: ";
   cin >> nome; 
  cout << "Digite o salario do funcionario: ";
  cin >> rb;
  salario=rb+(rb*7/100);
  cout << "Funcionario: " << nome << "\n";
  cout << "Recebia R$: " << rb << "\n";
  cout << "teve um aumento de 7%, com desconto do imposto 5%, seu novo salario é R$ " << salario << "\n";
  






return 0;
}