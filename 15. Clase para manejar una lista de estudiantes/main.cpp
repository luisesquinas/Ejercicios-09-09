#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Estudiante {
private:
    string nombre;
    float calificacion;

public:
    Estudiante(string nombre, float calificacion) : nombre(nombre), calificacion(calificacion) {}

    string getNombre() const {
        return nombre;
    }

    float getCalificacion() const {
        return calificacion;
    }

    void imprimir() const {
        cout << "Nombre: " << nombre << ", Calificación: " << calificacion << endl;
    }
};

class ListaEstudiantes {
private:
    vector<Estudiante> estudiantes;

public:
    void agregarEstudiante(const Estudiante& estudiante) {
        estudiantes.push_back(estudiante);
    }

    float calcularPromedio() const {
        if (estudiantes.empty()) {
            return 0.0;
        }
        float suma = 0;
        for (const auto& estudiante : estudiantes) {
            suma += estudiante.getCalificacion();
        }
        return suma / estudiantes.size();
    }

    void mostrarEstudiantes() const {
        if (estudiantes.empty()) {
            cout << "No hay estudiantes en la lista." << endl;
            return;
        }
        for (const auto& estudiante : estudiantes) {
            estudiante.imprimir();
        }
    }
};

int main() {
    ListaEstudiantes lista;

    lista.agregarEstudiante(Estudiante("Luis", 85.5));
    lista.agregarEstudiante(Estudiante("Dylan", 90.0));
    lista.agregarEstudiante(Estudiante("Agustín", 78.2));

    cout << "Lista de estudiantes:" << endl;
    lista.mostrarEstudiantes();

    float promedio = lista.calcularPromedio();
    cout << "Promedio de calificaciones: " << promedio << endl;

    return 0;
}
