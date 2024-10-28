#include <iostream>
using namespace std;

/*GEnera 3 funciones:
1 - Cálculo del indice de masa corporal
2 - Dadas las medidas de un triangulo determinar si es triangulo isósceles, escaleno o equilátero
3 - Genere una tabla de conversión de grados celsius a farenheit, función debe recibir los grados inciales
    y el incremento, por ejemplo si el inicio es -20 grados hasta 40 grados y el incremento es de 5, debería
    mostrarnos la tabla de grados celsius - farenheit de -20, -15, -10, -5, 0, 5, 10, 15, 20
Una vez que acabes tus funciones, usa el menú de la función main para llamar a las funciones*/

int main() 
{
    char opc;
    do{
        system("clear");
        cout << "Menu de opciones:" << endl;
        cout << "\t1. Opcion 1"<< endl;
        cout << "\t2. Opcion 2"<< endl;
        cout << "\t3. Opcion 3"<< endl;
        cout << "\t4. Salir"<< endl;
        cout << "Opcion: ";
        cin >> opc;
        switch(opc){
            case '1':
                cout << "Abre opcion 1" << endl;
                break;
            case '2':
                cout << "Abre opcion 2" << endl;
                break;
            case '3':
                cout << "Abre opcion 3" << endl;
                break;
            case '4':
                cout << "....Saliendo...." << endl;
                break;
            default:
                cout << endl << "Opcion invalida"<<endl;
                break;
        }
        cout << "Enter para continuar...";
        cin.ignore();
        cin.get();
    }while(opc!='4');
} 

