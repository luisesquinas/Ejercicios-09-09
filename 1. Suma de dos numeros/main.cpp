#include <iostream>
using namespace std;

int main() { 

    char op;
    int num1;
    int num2;
    int resultado;

    cout << "Número 1: ";
    cin >> num1;
    cout << "Número 2: ";
    cin >> num2;

    resultado = num1 + num2;

    cout << "El resultado es: " + to_string (resultado);


    return 0;
}