#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // a. Define un vector de enteros
    vector<int> num;

    // b. Inserta dos elementos en el vector
    num.push_back(10);
    num.push_back(20);

    // c. Imprime el contenido vectorial utilizando el bucle basado en rangos.
    for (const auto &elemento : num) {
        cout << elemento << " ";
    }
    cout << endl;

    // d. Borra el segundo elemento del vector
    if (num.size() >= 2) {
        num.erase(num.begin() + 1);
    }

    // e. Imprime el contenido vectorial utilizando un iterador
    cout << "Contenido del vector usando iterador: ";
    for (vector<int>::iterator iterador = num.begin(); iterador != num.end(); ++iterador) {
        cout << *iterador << " ";
    }
    cout << endl;

    // f. Borra el rango de 3 elementos a partir del principio del vector
    if (num.size() >= 3) {
        num.erase(num.begin(), num.begin() + 3);
    }

    // g. Imprime el contenido vectorial utilizando un iterador
    cout << "Contenido del vector usando iterador despues de borrar el rango desde el principio: ";
    for (auto iterador = num.begin(); iterador != num.end(); ++iterador) {
    cout << *iterador << " ";
}
    cout << endl;

    // h. Busca un elemento vectorial utilizando find()
    int elementoBuscado = 20;
    auto iterador = find(num.begin(), num.end(), elementoBuscado);

    // i. Si se ha encontrado el elemento, elimínalo
    if (iterador != num.end()) {
        num.erase(iterador);
    }

    // j. Imprime el contenido vectorial utilizando un iterador
    cout << "Contenido del vector usando iterador despues de eliminar el elemento " << elementoBuscado << ": ";
    for (auto iterador = num.begin(); iterador != num.end(); ++iterador) {
    cout << *iterador << " ";
}
    cout << endl;

    return 0;
}