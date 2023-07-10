#include <iostream>

using namespace std;

class Calculator
{
private:
    float num1, num2;

public:
    Calculator(float num1, float num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }
    float Sumar()
    {
        return num1 + num2;
    }
    float Dividir()
    {
        return num1 / num2;
    }
    float Multiplicar()
    {
        return num1 * num2;
    }
    float Restar()
    {
        return num1 - num2;
    }
};

int main()
{
    int opcion;
    float num1, num2;
    Calculator *calculadora;
    bool booleano = true;

    while (booleano)
    {
        cout << "Ingrese un numero";
        cout << endl;
        cin >> num1;
        cout << "Ingrese otro numero";
        cout << endl;
        cin >> num2;
        calculadora = new Calculator(num1, num2);

        cout << "Que operacion quiere hacer?" << endl;
        cout << "1- Sumar" << endl;
        cout << "2- Restar" << endl;
        cout << "3- Dividir" << endl;
        cout << "4- Multiplicar" << endl;
        cout << "5- Salir" << endl;
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            cout << "La suma dio " << calculadora->Sumar() << endl;
            break;
        case 2:
            cout << "La resta dio " << calculadora->Restar() << endl;
            break;
        case 3:
            cout << "La division dio " << calculadora->Dividir() << endl;
            break;
        case 4:
            cout << "La multiplicacion dio " << calculadora->Multiplicar() << endl;
            break;
        case 5:
            booleano = false;
            break;
        default:
            break;
        }
        system("pause");
        system("cls");
        }
    delete calculadora;
    return 0;
}