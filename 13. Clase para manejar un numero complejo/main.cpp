#include <iostream>
using namespace std;

class NumeroComplejo {
private:
    double real;
    double imaginario;

public:
    NumeroComplejo(double real, double imaginario) {
        this->real = real;
        this->imaginario = imaginario;
    }

    NumeroComplejo sumar(const NumeroComplejo& otro) const {
        double realSum = real + otro.real;
        double imaginarioSum = imaginario + otro.imaginario;
        return NumeroComplejo(realSum, imaginarioSum);
    }

    NumeroComplejo restar(const NumeroComplejo& otro) const {
        double realRest = real - otro.real;
        double imaginarioRest = imaginario - otro.imaginario;
        return NumeroComplejo(realRest, imaginarioRest);
    }

    void imprimir() const {
        if (imaginario >= 0)
            cout << real << " + " << imaginario << "i" << endl;
        else
            cout << real << " - " << -imaginario << "i" << endl;
    }
};

int main() {
    NumeroComplejo c1(3, 4);
    NumeroComplejo c2(1, -2);

    NumeroComplejo resultadoSuma = c1.sumar(c2);
    cout << "Suma: ";
    resultadoSuma.imprimir();

    NumeroComplejo resultadoResta = c1.restar(c2);
    cout << "Resta: ";
    resultadoResta.imprimir();

    return 0;
}
