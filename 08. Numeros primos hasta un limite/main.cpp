#include <iostream>
#include <cmath>
using namespace std;


bool esPrimo(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;

    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int limite;

    cout << "Introduce un número límite: ";
    cin >> limite;

    cout << "Los números primos menores o iguales a " + to_string (limite) + " son: \n";

    for (int i = 2; i <= limite; ++i) {
        if (esPrimo(i)) {
            cout << to_string (i) + " ";
        }
    }
 
    return 0;
}

