#include <iostream>
using namespace std;

class CuentaBancaria {
private:
    double saldo;

public:
    CuentaBancaria(double saldoInicial = 0.0) : saldo(saldoInicial) {}

    void depositar(double cantidad) {
        if (cantidad > 0) {
            saldo += cantidad;
            cout << "Se han depositado " << cantidad << "€. Saldo actual: " << saldo << "€" << endl;
        } else {
            cout << "La cantidad a depositar debe ser positiva." << endl;
        }
    }

    void retirar(double cantidad) {
        if (cantidad > 0) {
            if (cantidad <= saldo) {
                saldo -= cantidad;
                cout << "Se han retirado " << cantidad << "€. Saldo actual: " << saldo << "€" << endl;
            } else {
                cout << "Saldo insuficiente para retirar " << endl;
            }
        } else {
            cout << "La cantidad a retirar debe ser positiva." << endl;
        }
    }

    void mostrarSaldo() const {
        cout << "Saldo actual: " << saldo  << "€" << endl;
    }
};

int main() {
    double saldoInicial;
    cout << "Introduce el saldo inicial de la cuenta: ";
    cin >> saldoInicial;

    CuentaBancaria cuenta(saldoInicial);

    int opcion;
    double cantidad;

    do {
        cout << "\nMenu de operaciones:\n";
        cout << "1. Mostrar saldo\n";
        cout << "2. Depositar dinero\n";
        cout << "3. Retirar dinero\n";
        cout << "4. Salir\n";
        cout << "Elige una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cuenta.mostrarSaldo();
                break;
            case 2:
                cout << "Introduce la cantidad a depositar: ";
                cin >> cantidad;
                cuenta.depositar(cantidad);
                break;
            case 3:
                cout << "Introduce la cantidad a retirar: ";
                cin >> cantidad;
                cuenta.retirar(cantidad);
                break;
            case 4:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Introduce un número del 1-5" << endl;
                break;
        }
    } while (opcion != 4);

    return 0;
}
