#include <iostream>
using namespace std;

int main() {
  int x;
  cout<< "Digite seu primeiro numero: ";
  cin>> x;
   
  if(x % 2 == 0){
      cout<< x<< " é par";
  }
  
  else{
      cout<< x << " é impar" ;
  }
  
  return 0;
}