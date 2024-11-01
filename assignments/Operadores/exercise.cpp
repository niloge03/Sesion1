#include <iostream>
#include <cmath>
using namespace std;
/* Genera un programa que calule el volumen y área de una esfera, usa la biblioteca cmath
usa la constante pi (M_PI) de la biblioteca de la siguiente manera: */

int main() 
{
  //std::cout << M_PI << std::endl;
  cout<<"cual es el diametro de tu esfera?"<<endl;
  cout<<"Diametro (m): "; 
  double d; 
  cin>>d;
  double r=d/2;
  cout<<"el radio es: "<<r<<endl; 
  double vol=4.0/3.0*M_PI*pow(r,3); 
  cout<<"el volumen es: "<<vol<<endl;
   double area=4.0*M_PI*pow(r,2); 
  cout<<"el area es: "<<area<<endl; 

 // return 0; 
}
