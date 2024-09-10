#ifndef TAREAS_H
#define TAREAS_H

#include <string>
#include <vector>

using namespace std;

class Tarea {
private:
    string descripcion;
    bool completada;

public:
    // Constructor de la clase Tarea
    Tarea(string desc) : descripcion(desc), completada(false) {}

    // Métodos para obtener la descripción y el estado de la tarea
    string getDescripcion() const { return descripcion; }
    bool estaCompletada() const { return completada; }

    // Método para marcar la tarea como completada
    void marcarCompletada() { completada = true; }
};

class ListaTareas {
private:
    vector<Tarea> tareas;  // Vector que almacena las tareas

public:
    // Método para agregar una nueva tarea
    void agregarTarea(const string& descripcion);

    // Método para eliminar una tarea por su índice
    void eliminarTarea(int indice);

    // Método para marcar una tarea como completada
    void marcarCompletada(int indice);

    // Método para mostrar la lista de tareas
    void mostrarTareas() const;
};

#endif
