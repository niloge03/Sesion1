#include <iostream>
using namespace std;

/*GEnera 3 funciones:
1 - Cálculo del indice de masa corporal
2 - Dadas las medidas de un triangulo determinar si es triangulo isósceles, escaleno o equilátero
3 - Genere una tabla de conversión de grados celsius a farenheit, función debe recibir los grados inciales
    y el incremento, por ejemplo si el inicio es -20 grados hasta 40 grados y el incremento es de 5, debería
    mostrarnos la tabla de grados celsius - farenheit de -20, -15, -10, -5, 0, 5, 10, 15, 20
Una vez que acabes tus funciones, usa el menú de la función main para llamar a las funciones*/

float imc(float altura, float peso) {
    return peso / (altura * altura);
}

string tipoTriangulo(float lado1, float lado2, float lado3) {
    if (lado1 == lado2 && lado2 == lado3) {
        return "Equilátero";
    } else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3) {
        return "Isósceles";
    } else {
        return "Escaleno";
    }
}

void temp(float t1, float incremento, float t2) {
    cout << "Celsius\tFahrenheit" << endl;
    for (int i = t1; i <= t2; i += incremento) {
        float F = i * 9.0 / 5.0 + 32.0;
        cout << i << "\t" << F << endl;
    }
}

int main() 
{
    char opc;
    do{
        system("clear");
        cout << "Menu de opciones:" << endl;
        cout << "\t1. calculo de masa corporal"<< endl;
        cout << "\t2. tipo de triangulo"<< endl;
        cout << "\t3. celcius a farenheit"<< endl;
        cout << "\t4. Salir"<< endl;
        cout << "Opcion: ";
        cin >> opc;
        switch(opc){
            case '1': {
                float altura, peso;
                cout << "Su altura en m: ";
                cin >> altura;
                cout << "Su peso en kg: ";
                cin >> peso;
                cout << "Su IMC es: " << imc(altura, peso) << endl;
                break;
            }
           case '2': {
                float lado1, lado2, lado3;
                cout << "ingrese los 3 lados: ";
                cin >> lado1>>lado2>>lado3; 
                cout << "el tipo de riangulo es: " << tipoTriangulo(lado1, lado2, lado3) << endl;
                break;
            }
             case '3': {
                float t1, incremento, t2;
                cout << "ingrese la temperatura inicial, el incremento y la temperatura final (en celcius): ";
                cin >> t1>>incremento>>t2; 
                temp(t1, incremento, t2);
                break;
            }
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

