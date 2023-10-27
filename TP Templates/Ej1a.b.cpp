#include <iostream>
using namespace std;

// Plantilla de función que toma un tipo de retorno y un argumento
template <typename ReturnType, typename ArgumentType>
ReturnType miFuncion(ArgumentType argument) {
    ReturnType resultado = argument * 2;
    return resultado;
}

template <typename T>
class MiClase {
public:
    T miAtributo;
    //Constructor que inicializa miAtributo
    MiClase(T valorInicial) : miAtributo(valorInicial) {}

    void hacerAlgo() {
        miAtributo = miAtributo * 2;
    }
};

int main() {
    int entero = 5;
    double decimal = 2.5;

    // Llamo a la funcion con diferentes tipos de datos
    int resultadoEntero = miFuncion<int>(entero);
    double resultadoDecimal = miFuncion<double>(decimal);

   cout << "Resultado con tipo int: " << resultadoEntero <<endl;
   cout << "Resultado con tipo double: " << resultadoDecimal <<endl;

   // Creao una instancia de MiClase con un tipo de dato int
    MiClase<int> objetoInt(6);

    objetoInt.hacerAlgo();

   cout << "Valor de miAtributo (int): " << objetoInt.miAtributo <<endl;

    MiClase<double> objetoDouble(4.5);

    objetoDouble.hacerAlgo();

   cout << "Valor de miAtributo (double): " << objetoDouble.miAtributo <<endl;

  return 0;
}