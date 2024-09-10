#include <iostream>
#include "tareas.h"
using namespace std;

int main() {
    ListaTareas lista;
    int opcion;
    string descripcion;
    int indice;

    do {
        cout << "\nGestor de Tareas" << endl;
        cout << "Selecciona una opcion: " << endl;
        cout << "1. Agregar tarea" << endl;
        cout << "2. Eliminar tarea" << endl;
        cout << "3. Marcar tarea como completada" << endl;
        cout << "4. Mostrar lista de tareas" << endl;
        cout << "5. Salir" << endl;
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1:
                cout << "Introduce la descripcion de la tarea: ";
                getline(cin, descripcion);
                lista.agregarTarea(descripcion);
                break;
            case 2:
                cout << "Introduce el indice de la tarea a eliminar: ";
                cin >> indice;
                lista.eliminarTarea(indice);
                break;
            case 3:
                cout << "Introduce el indice de la tarea a marcar como completada: ";
                cin >> indice;
                lista.marcarCompletada(indice);
                break;
            case 4:
                cout << "Lista de tareas:" << endl;
                lista.mostrarTareas();
                break;
            case 5:
                cout << "Saliendo del gestor de tareas..." << endl;
                break;
            default:
                cout << "Opcion no valida, elige de nuevo." << endl;
        }
    } while (opcion != 5);

    return 0;
}
