#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

//Interfaz Estrategia
class RutaStrategy {
public:
    virtual string calcularRuta(const string& origen, const string& destino) = 0;
    virtual ~RutaStrategy() {}
};

//Estrategias concretas
class PeatonRuta : public RutaStrategy {
public:
    string calcularRuta(const string& origen, const string& destino) override {
        return "Calcular ruta para peatones desde " + origen + " a " + destino;
    }
};

class CocheRuta : public RutaStrategy {
public:
    string calcularRuta(const string& origen, const string& destino) override {
        return "Calcular ruta en coche desde " + origen + " a " + destino;
    }
};

class TransportePublicoRuta : public RutaStrategy {
public:
    string calcularRuta(const string& origen, const string& destino) override {
        return "Calcular ruta en transporte publico desde " + origen + " a " + destino;
    }
};

//Contexto
class CalculadorDeRutas {
private:
    RutaStrategy* estrategia;

public:
    CalculadorDeRutas(RutaStrategy* estrategia) : estrategia(estrategia) {}

    void setEstrategia(RutaStrategy* nuevaEstrategia) {
        estrategia = nuevaEstrategia;
    }

    string calcularRuta(const string& origen, const string& destino) {
        return estrategia->calcularRuta(origen, destino);
    }
};

void clearScreen() {
    system("cls");
}

int mostrarMenu() {
    int opcion;
    cout << "Elija un medio de transporte:" << endl;
    cout << "1. Coche" << endl;
    cout << "2. Peaton" << endl;
    cout << "3. Transporte publico" << endl;
    cout << "0. Salir" << endl;
    cout << "Opcion: ";
    cin >> opcion;
    return opcion;
}

int main() {
    string origen, destino;
    int opcion;

    while (true) {
    
        cout << "Ingrese el origen: ";
        cin.ignore();
        getline(cin, origen);

        cout << "Ingrese el destino: ";
        getline(cin, destino);

        opcion = mostrarMenu();

        if (opcion == 0) {
            break;
        }

        CalculadorDeRutas calculador(nullptr); // Inicializar con una estrategia nula

        if (opcion == 1) {
            calculador.setEstrategia(new CocheRuta());
        } else if (opcion == 2) {
            calculador.setEstrategia(new PeatonRuta());
        } else if (opcion == 3) {
            calculador.setEstrategia(new TransportePublicoRuta());
        }

        string resultado = calculador.calcularRuta(origen, destino);
        cout << resultado << endl;

    }

    return 0;
}
