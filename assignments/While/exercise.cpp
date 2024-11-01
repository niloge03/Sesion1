#include <iostream>
using namespace std; 
/* Escribe un programa que tenga una función que recibe números del usuario mientras sean menores que 100
si recibe 100 o mayor deja de recibir y nos devuelve la suma de los números recibidos*/
int sumaMenoresA100(){
  int num; 
  int suma=0; 
    cout << "Ingresa números (100 o mayor para detenerte):" << endl;
   while (true) {
    cin>>num; 
    if (num>=100){
      break;
    }
    suma+=num;
    }
  return suma;
  //Completa la función 
}

int main() 
{
  //llama a la función y despliega un mensaje a pantalla con el resultado de la suma
  int resultado = sumaMenoresA100(); // Llamar a la función y guardar el resultado
  cout << "La suma de los números menores a 100 es: " << resultado << endl;
}
////