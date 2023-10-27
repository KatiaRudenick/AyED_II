#include <iostream>
using namespace std;

template <typename ConstructorArg, typename ReturnType>
class OtraClase {
private:
    ConstructorArg dato;

public:
    // Constructor que toma un argumento
    OtraClase(ConstructorArg arg) : dato(arg) {
        // Constructor
    }

    // Método que devuelve un valor de tipo ReturnType
    ReturnType otroMetodo() {
        // Implementación del método, por ejemplo, duplicar el valor del argumento
        ReturnType resultado = dato * 2;
        return resultado;
    }
};

int main() {
    // Crear una instancia de OtraClase con un tipo de dato int y un valor inicial de 5
    OtraClase<int, int> objetoInt(5);

    // Llamar al método otroMetodo
    int resultadoInt = objetoInt.otroMetodo();

    // Mostrar el resultado
    std::cout << "Resultado (int): " << resultadoInt << std::endl;

    // Crear una instancia de OtraClase con un tipo de dato double y un valor inicial de 2.5
    OtraClase<double, double> objetoDouble(2.5);

    // Llamar al método otroMetodo
    double resultadoDouble = objetoDouble.otroMetodo();

    // Mostrar el resultado
    std::cout << "Resultado (double): " << resultadoDouble << std::endl;

    return 0;
}
