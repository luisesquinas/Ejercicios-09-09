#include <iostream>
using namespace std;

int main() {
    int numero;
    unsigned long long factorial = 1;

    cout << "Ingresa un número: ";
    cin >> numero;

    if (numero < 0) {
        cout << "El número tiene que ser positivo";
    } else {
        for (int x = 1; x <= numero; ++x) {
            factorial *= x;
        }
    
        cout << "El factorial de " + to_string (numero) + " es: " + to_string (factorial);
    }

    return 0;
}
