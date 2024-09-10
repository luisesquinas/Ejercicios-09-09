#include <iostream>
#include "calculadora.h"
using namespace std;

int main() {
    int opcion;
    double num1, num2, resultado;

    do {
        cout << "#Calculadora Modular#" << endl;
        cout << "Selecciona una opcion: "<< endl;
        cout << "1. Sumar" << endl;
        cout << "2. Restar" << endl;
        cout << "3. Multiplicar" << endl;
        cout << "4. Dividir" << endl;
        cout << "5. Salir";
        
        cin >> opcion;

        if (opcion >= 1 && opcion <= 4) {
            cout << "Introduce el primer numero: ";
            cin >> num1;
            cout << "Introduce el segundo numero: ";
            cin >> num2;

            switch (opcion) {
                case 1:
                    resultado = sumar(num1, num2);
                    cout << "Resultado de la suma: " << resultado << endl;
                    break;
                case 2:
                    resultado = restar(num1, num2);
                    cout << "Resultado de la resta: " << resultado << endl;
                    break;
                case 3:
                    resultado = multiplicar(num1, num2);
                    cout << "Resultado de la multiplicacion: " << resultado << endl;
                    break;
                case 4:
                    resultado = dividir(num1, num2);
                    if (num2 != 0) {
                        cout << "Resultado de la division: " << resultado << endl;
                    } else {
                        cout << "Error: Ningun numero se puede dividir entre 0" << endl;
                    }
                    break;
                default:
                    cout << "Opcion no valida." << endl;
            }
        } else if (opcion != 5) {
            cout << "Opcion no valida, por favor elige de nuevo." << endl;
        }
    } while (opcion != 5);

    cout << "Gracias por usar la calculadora." << endl;

    return 0;
}
