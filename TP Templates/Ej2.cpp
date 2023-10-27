#include <iostream>
using namespace std;

//Utiliza decltype para determinar el tipo de retorno en función de la comparación entre a y b
// Auto = el tipo de dato del valor de retorno de la función será deducido automáticamente por el compilador en función 
// de la expresión que sigue a decltype.

template <typename T1, typename T2>
auto Menor(T1 a, T2 b) -> decltype(a < b ? a : b) {
    return (a < b) ? a : b;
}

int main() {
    int resultadoInt = Menor(2, 3);
    double resultadoDouble = Menor(6.0, 4.0);
    float resultadoFloat = Menor(1.5f, 2.5f);

    cout << "Menor(2, 3) == " << resultadoInt << endl;
    cout << "Menor(6.0, 4.0) == " << resultadoDouble << endl;
    cout << "Menor(1.5f, 2.5f) == " << resultadoFloat << endl;

    int resultadoMix1 = Menor(5, 3.5);
    double resultadoMix2 = Menor(2.5, 4);

    cout << "Menor(5, 3.5) == " << resultadoMix1 << endl;
    cout << "Menor(2.5, 4) == " << resultadoMix2 << endl;

    return 0;
}