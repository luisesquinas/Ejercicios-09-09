#include <iostream>
#include <iomanip>
#include "conversiones.h"
using namespace std;

int main() {
    int opcion;
    double valor, resultado;

    do {
        cout << "#Conversion de Unidades#" << endl;
        cout << "Selecciona una opcion: " << endl;
        cout << "1. Metros a Pies" << endl;
        cout << "2. Kilogramos a Libras" << endl;
        cout << "3. Celsius a Fahrenheit" << endl;
        cout << "4. Salir"<< endl;
        cin >> opcion;

        if (opcion >= 1 && opcion <= 3) {
            cout << "Introduce el valor a convertir: ";
            cin >> valor;

            switch (opcion) {
                case 1:
                    resultado = metrosAPies(valor);
                    cout << fixed << setprecision(2);
                    cout << valor << " metros son " << resultado << " pies." << endl;
                    break;
                case 2:
                    resultado = kilogramosALibras(valor);
                    cout << fixed << setprecision(2);
                    cout << valor << " kilogramos son " << resultado << " libras." << endl;
                    break;
                case 3:
                    resultado = celsiusAFahrenheit(valor);
                    cout << fixed << setprecision(2);
                    cout << valor << " grados Celsius son " << resultado << " grados Fahrenheit." << endl;
                    break;
                default:
                    cout << "Opcion no valida." << endl;
            }
        } else if (opcion != 4) {
            cout << "Opcion no valida. Por favor, elige de nuevo." << endl;
        }

    } while (opcion != 4);

    cout << "Gracias por usar el programa de conversion de unidades." << endl;
    return 0;
}
