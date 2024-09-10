#include <iostream>
#include <cstdlib> 
#include <ctime>  
using namespace std;

int main() {
    srand(static_cast<unsigned>(time(0)));

    int numeroSecreto = rand() % 100 + 1;
    int numeroUsuario;
    bool adivinado = false;

    while (!adivinado) {
        cout << "Adivina el número entre el 1 y el 100: ";
        cin >> numeroUsuario;

        if (numeroUsuario < numeroSecreto) {
            cout << "El número es mayor. Vuelve a probar.\n";
        } else if (numeroUsuario > numeroSecreto) {
            cout << "El número es menor. Vuelve a probar.\n";
        } else {
            cout << "El número es correcto!";
            adivinado = true;
        }
    }

    return 0;
}
