#include <iostream>
using namespace std;

class Rectangulo {
private:
    double largo;
    double ancho;

public:
    Rectangulo(double l = 0.0, double a = 0.0) : largo(l), ancho(a) {}

    void setLargo(double l) {
        largo = l;
    }

    void setAncho(double a) {
        ancho = a;
    }

    double getLargo() const {
        return largo;
    }

    double getAncho() const {
        return ancho;
    }

    double calcularArea() const {
        return largo * ancho;
    }

    double calcularPerimetro() const {
        return 2 * (largo + ancho);
    }
};

int main() {
    Rectangulo rectangulo;

    double largo; 
    double ancho;

    cout << "Ingresa el largo del rectángulo: ";
    cin >> largo;
    cout << "Ingresa el ancho del rectángulo: ";
    cin >> ancho;

    rectangulo.setLargo(largo);
    rectangulo.setAncho(ancho);

    cout << "Área del rectángulo: " << rectangulo.calcularArea() << endl;
    cout << "Perímetro del rectángulo: " << rectangulo.calcularPerimetro() << endl;

    return 0;
}
