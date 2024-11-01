#include <iostream>
using namespace std;

int main() {
  int I;
  float a, b, c;
  cout<< " 1- para mostrar 3 numeros em ordem crescente; \n 2- para ordem decrescente \n 3- pata ver o numero maior no meio: ";
  cin>> I;
  cout<< "Digite seu numero: ";
  cin>> a;
   cout<< "Digite seu numero: ";
  cin>> b;
   cout<< "Digite seu numero: ";
  cin>> c;
 
      if(I == 1) {
   
		if (a < b and a < c) {
			cout<< a<<  ", ";
			if (b < c) {
				cout<< b<< ", " <<c<< "\n";
			} else{
				cout<< c<< ", " <<b<< "\n" ;
			}
		} else if (b < a and b < c) {
			cout<< b<<  ", ";
			if (a < c) {
				cout<< a <<  ", "<<c<< "\n";
			} else {
				cout<<c<< ", "<<a<< "\n";
			}
		} 
		
			else{ 
			    cout<< c<<  ", " "\n";
			if (c < b) {
				cout<< a<<  ", " <<b<< "\n";
			}  else {
			    cout<< b<< ", " <<a<< "\n";
			}
		}
   }

  
  
      if(I == 2) {
   
     if(a > b and a > c) {
			cout<< a <<  ", ";
			if (b > c) {
				cout<<b<< ", " "\n";
			} 
			else {
				cout<< c << ", " <<b << "\n";
			}
		} 
		  else if (b > a and b > c) {
			cout<< b << ", ";
			 if(a > c) {
				cout<< a << ", " << c << "\n";
			} 
			else{
				cout<< c << ", " <<a << "\n";
			}
		} 
		else{
			cout<<c <<  ", ";
			if (c > b) {
				cout<<b << ", " << a << "\n";
			} 
			else{
				cout<<a << ", " <<b << "\n";
			}
		}
    }
   


   if(I == 3){
   
   if(a> c and a > b) {
    cout<< b << ", " <<b<< ", " << c << "\n";
   }
   if(b > c and b > a) {
    cout<< a << ", " <<b << ", " << c << "\n";
     }
   if(c > a and c > a) {
    cout<< a << ", " << c <<  ", " <<b << "\n";
    }
   }
  
  