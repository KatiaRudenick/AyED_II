#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <sstream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    
    string phrase =
        "Existen dos tipos de lenguajes de programación: por un lado, aquellos de los que la gente se queja todo el rato; por otro, los que nadie utiliza.";

    // Creo un unordered_map para contar las palabras
    unordered_map<string, int> contadorPalabras;

    // Utilizo un stringstream para dividir la frase en palabras
    istringstream stream(phrase);

    // Procesa cada palabra en la frase
    string palabra;
    while (stream >> palabra) {
        // Limpia la palabra de signos de puntuación
        palabra.erase(remove_if(palabra.begin(), palabra.end(), ::ispunct), palabra.end());

        // Convierte la palabra a minusculas para evitar distinciones entre mayusculas y minusculas
        transform(palabra.begin(), palabra.end(), palabra.begin(), ::tolower);

        // Incrementa el contador de la palabra en el unordered_map
        contadorPalabras[palabra]++;
    }

    // Imprimo el resultado
    cout << "Conteo de palabras:\n";
    for (const auto& par : contadorPalabras) {
        cout << par.first << ": " << par.second << " veces\n";
    }

    return 0;
}