#include <iostream>
using namespace std;

template <typename ConstructorArg, typename ReturnType>
class OtraClase {
private:
    ConstructorArg dato;

public:
    // Constructor que toma un argumento
    OtraClase(ConstructorArg arg) : dato(arg) {
    }

    //Metodo que devuelve un valor de tipo ReturnType
    ReturnType otroMetodo() {
        ReturnType resultado = dato * 2;
        return resultado;
    }
};

int main() {
    // Creo una instancia de OtraClase (objetoInt) con un tipo de dato int y un valor inicial de 5
    OtraClase<int, int> objetoInt(5);

    int resultadoInt = objetoInt.otroMetodo();

    cout << "Resultado (int): " << resultadoInt << endl;

    OtraClase<double, double> objetoDouble(2.5);

    double resultadoDouble = objetoDouble.otroMetodo();

    cout << "Resultado (double): " << resultadoDouble << endl;

    return 0;
}
