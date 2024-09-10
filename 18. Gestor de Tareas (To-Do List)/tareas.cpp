#include "tareas.h"
#include <iostream>
using namespace std;

void ListaTareas::agregarTarea(const string& descripcion) {
    tareas.push_back(Tarea(descripcion));
    cout << "Tarea agregada: " << descripcion << endl;
}

void ListaTareas::eliminarTarea(int indice) {
    if (indice >= 0 && indice < tareas.size()) {
        cout << "Tarea eliminada: " << tareas[indice].getDescripcion() << endl;
        tareas.erase(tareas.begin() + indice);
    } else {
        cout << "Indice no valido." << endl;
    }
}

void ListaTareas::marcarCompletada(int indice) {
    if (indice >= 0 && indice < tareas.size()) {
        tareas[indice].marcarCompletada();
        cout << "Tarea marcada como completada: " << tareas[indice].getDescripcion() << endl;
    } else {
        cout << "Indice no valido." << endl;
    }
}

void ListaTareas::mostrarTareas() const {
    if (tareas.empty()) {
        cout << "No hay tareas en la lista." << endl;
    } else {
        for (size_t i = 0; i < tareas.size(); ++i) {
            cout << i << ". " << tareas[i].getDescripcion();
            if (tareas[i].estaCompletada()) {
                cout << " [Completada]";
            }
            cout << endl;
        }
    }
}
