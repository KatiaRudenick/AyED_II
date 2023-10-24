#include <iostream>
#include <string>
using namespace std;

// Clase base para alojamientos
class Alojamiento {
public:
    virtual string obtenerDescripcion() = 0;
    virtual double calcularCosto() = 0;
    virtual ~Alojamiento() {}
};

// Implementacion concreta de un hotel
class Hotel : public Alojamiento {
public:
    string obtenerDescripcion() override {
        return "Hotel de lujo";
    }

    double calcularCosto() override {
        return 200000;
    }
};

// Implementacion concreta de un hostel barato
class Hostel : public Alojamiento {
public:
    string obtenerDescripcion() override {
        return "Hostel economico";
    }

    double calcularCosto() override {
        return 50000;
    }
};

// Decorador base
class DecoradorAlojamiento : public Alojamiento {
protected:
    Alojamiento* alojamiento;

public:
    DecoradorAlojamiento(Alojamiento* alojamiento) : alojamiento(alojamiento) {}

    string obtenerDescripcion() override {
        return alojamiento->obtenerDescripcion();
    }

    double calcularCosto() override {
        return alojamiento->calcularCosto();
    }
};

// Implementacion concreta de un servicio adicional en alojamiento
class Pileta : public DecoradorAlojamiento {
public:
    Pileta(Alojamiento* alojamiento) : DecoradorAlojamiento(alojamiento) {}

    string obtenerDescripcion() override {
        return DecoradorAlojamiento::obtenerDescripcion() + ", con pileta";
    }

    double calcularCosto() override {
        return DecoradorAlojamiento::calcularCosto() + 10000;
    }
};

class AireAcondicionado : public DecoradorAlojamiento {
public:
    AireAcondicionado(Alojamiento* alojamiento) : DecoradorAlojamiento(alojamiento) {}

    string obtenerDescripcion() override {
        return DecoradorAlojamiento::obtenerDescripcion() + ", con aire acondicionado";
    }

    double calcularCosto() override {
        return DecoradorAlojamiento::calcularCosto() + 3000;
    }
};

int main() {
    Alojamiento* hotel = new Hotel();
    cout << "Descripcion: " << hotel->obtenerDescripcion() << endl;
    cout << "Costo: $" << hotel->calcularCosto() << endl;

    Alojamiento* hostel = new Hostel();
    cout << "Descripcion: " << hostel->obtenerDescripcion() << endl;
    cout << "Costo: $" << hostel->calcularCosto() << endl;

    Alojamiento* hotelConPileta = new Pileta(hotel);
    cout << "Descripcion: " << hotelConPileta->obtenerDescripcion() << endl;
    cout << "Costo: $" << hotelConPileta->calcularCosto() << endl;

    Alojamiento* hostelConPileta = new Pileta(hostel);
    cout << "Descripcion: " << hostelConPileta->obtenerDescripcion() << endl;
    cout << "Costo: $" << hostelConPileta->calcularCosto() << endl;

    Alojamiento* hostelConAire = new AireAcondicionado(hostel);
    cout << "Descripcion: " << hostelConAire->obtenerDescripcion() << endl;
    cout << "Costo: $" << hostelConAire->calcularCosto() << endl;

    delete hotel;
    delete hostel;
    delete hotelConPileta;
    delete hostelConPileta;
    delete hostelConAire;
    

    return 0;
}
