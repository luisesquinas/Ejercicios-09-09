#include <iostream>
using namespace std;

int main() {
    int numero; 
    int invertido;
    int digito;

    cout << "Introduce un número entero: ";
    cin >> numero;

    int numeroAbs = (numero < 0) ? -numero : numero;

    while (numeroAbs > 0) {
        digito = numeroAbs % 10;
        invertido = invertido * 10 + digito;
        numeroAbs /= 10;
    }

    if (numero < 0) {
        invertido = -invertido;
    }

    cout << "El número invertido es: " + to_string (invertido);

    return 0;
}

