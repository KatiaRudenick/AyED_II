#include <iostream>
#include <map>

using namespace std;

int main() {
    // a. Contenedor de mapa vacío
    map<int, string> Map1;

    // b. Insertar elementos en orden aleatorio
    Map1[5] = "Cinco";
    Map1[2] = "Dos";
    Map1[8] = "Ocho";
    Map1[1] = "Uno";

    // c. Imprimir mapa Map1
    cout << "Mapa Map1:\n";
    for (const auto& pair : Map1) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // d. Asignar los elementos de Map1 a Map2
    map<int, string> Map2(Map1.begin(), Map1.end());

    // e. Imprimir todos los elementos del mapa Map2
    cout << "\nMapa Map2:\n";
    for (const auto& pair : Map2) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // f. Eliminar todos los elementos hasta el elemento con clave=3 en Map2
    auto iterador_inicio = Map2.begin();
    auto iterador_fin = Map2.find(3);
    Map2.erase(iterador_inicio, iterador_fin);

    // g. Imprimir todos los elementos del mapa Map2 despues de eliminar
    cout << "\nMapa Map2 despues de eliminar hasta clave=3:\n";
    for (const auto& pair : Map2) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // h. Eliminar todos los elementos con clave = 4 en Map2
    Map2.erase(4);

    // i. Límite inferior y límite superior para el mapa Map1 clave = 5
    auto lower_bound_result = Map1.lower_bound(5);
    auto upper_bound_result = Map1.upper_bound(5);

    cout << "\nLower bound para clave=5 en Map1: " << lower_bound_result->first << ": " << lower_bound_result->second << endl;
    cout << "Upper bound para clave=5 en Map1: " << upper_bound_result->first << ": " << upper_bound_result->second << endl;

    return 0;
}