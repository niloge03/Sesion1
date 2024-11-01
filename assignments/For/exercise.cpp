#include <iostream>
using namespace std;
// Crea una función que genere una tabla de multiplicar de un número entero recibido como parámetro
void tabla(int a) {
  cout<<"la tabla de multiplicar de " << a << " es:"<<endl; 
  for (int i=1; i<=10; i++){
    cout<<a<<" * "<<i<<" = " <<a*i<<endl;
  } 
}
int main() {
  string continuar;
  do {
    int num1;
    cout << "ingrese un numero para generar su tabla de multiplicacion: " ;
    cin>>num1; 
    tabla(num1);
    cout<<endl;
     
    cout<<"desea ingresar otra tabla? (escriba si o presione cualquier tecla): ";
    cin>>continuar;

  }while (continuar=="si");
  
return 0;
//Solicita al usuario el número y llama a la función
/*Extra: ¿Como puedes hacer para que despliegue todas las tablas que el usuario quiera? es decir
          que el usuario pida una tabla, se le muestre y al final le pregunte si quiere otra, si quiere otra
          vuelve a preguntar cual número, la despliega y así hasta que el usuario responda que no quiere otra*/
}
