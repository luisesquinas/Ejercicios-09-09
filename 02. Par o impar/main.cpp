#include <iostream>
using namespace std;

int main() { 

    int num;

    cout << "Introduce un número: ";
    cin >> num;

    if (num % 2 == 0){ 
        cout << "El número es par";
    } else {
        cout << "El número es impar";
    }   

    return 0;
}