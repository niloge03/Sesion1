#include <iostream>
using namespace std;
/* Genera un programa que tenga dos funciones, una que nos diga cual es el mayor de dos números enteros
 y otra que nos diga cuál es el mayor entre 3 números. */

int mayorDeDos(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

//Escribe tambien la función de mayor de tres números
int mayorDeTres(int a, int b, int c) {
    if (a > b and a > c) {
        return a;
    } else if (b > c) {
        return b;
      } else {
        return c;
      }
    }


int main() 
{
  //EScribe lo necesario para que el usuario pueda ingresar los números y llamar a las funciones
  //Haz un pequeño menú para que el usuario pueda decidir qué quiere hacer. 
  int opcion;
  bool salir=false;

  while (!salir) {
    cout<<" "<<endl;
    cout<<"Menu"<<endl;
    cout<<"1.MoyorDeDos"<<endl;
    cout<<"2.MayorDeTres"<<endl;
    cout<<"3.salir"<<endl;
    cout<<"selecciona una opcion: ";
    cin>>opcion;

    if (opcion==1) {
      int num1, num2;
      cout<<"ingrese el primer numero: "<<endl;
      cin>>num1;
      cout<<"ingrese el segundo numero: "<<endl;
      cin>>num2;
      cout<<"el mayor numero entre "<<num1<< " y " <<num2<< " es: " <<mayorDeDos(num1, num2)<<endl;
    }else if (opcion==2){
      int num1, num2, num3;
      cout<<"ingrese el primer numero: "<<endl;
      cin>>num1;
      cout<<"ingrese el segundo numero: "<<endl;
      cin>>num2;
      cout<<"ingrese el tercer numero: "<<endl;
      cin>>num3;
      cout<<"el mayor numero entre "<<num1<< ", " <<num2<< " y " <<num3<<" es "<<mayorDeTres(num1, num2, num3)<<endl;
    }else if (opcion==3) {
      salir=true;
    }else {
      cout<<"ingrese un valor permitido"<<endl;
    } //escribir codigo para que regrese al menu
   }
  return 0;

}
