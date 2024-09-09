#include <iostream>
using namespace std;

int main() {
    int cantidad;
    double numero;
    double suma;
    double promedio;

    cout << "¿Cuántos números quieres ingresar? ";
    cin >> cantidad;

    for (int x = 1; x <= cantidad; x++) {
        cout << "Ingresa el número " + to_string (x) + ": ";
        cin >> numero;
        suma += numero;
    }

    if (cantidad >= 0) {
        promedio = suma / cantidad;
        cout << "El promedio es: " + to_string (promedio);
    }

    return 0;
}
