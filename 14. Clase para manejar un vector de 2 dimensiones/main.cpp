#include <iostream>
#include <cmath>
using namespace std;

class Vector2D {
private:
    float x, y;

public:
    Vector2D() : x(0), y(0) {}
    Vector2D(float xVal, float yVal) : x(xVal), y(yVal) {}

    Vector2D sumar(const Vector2D& v) const {
        return Vector2D(x + v.x, y + v.y);
    }

    Vector2D restar(const Vector2D& v) const {
        return Vector2D(x - v.x, y - v.y);
    }

    float magnitud() const {
        return sqrt(x * x + y * y);
    }

    void imprimir() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Vector2D v1(3.0, 4.0);
    Vector2D v2(1.0, 2.0);

    cout << "Vector 1: ";
    v1.imprimir();

    cout << "Vector 2: ";
    v2.imprimir();

    Vector2D suma = v1.sumar(v2);
    cout << "Suma de Vector 1 y Vector 2: ";
    suma.imprimir();

    Vector2D resta = v1.restar(v2);
    cout << "Resta de Vector 1 y Vector 2: ";
    resta.imprimir();

    cout << "Magnitud de Vector 1: " << v1.magnitud() << endl;

    return 0;
}
