#include <iostream>
#include <vector>
#include <memory>
#include "Article.hpp"
#include "Employee.hpp"
#include "Provider.hpp"
#include "Order.hpp"
using namespace std;


void modifyProvider(vector<shared_ptr<Provider>>& providers);
void deleteProvider(vector<shared_ptr<Provider>>& providers);

int main() 
{

    // Crear un vector para almacenar los productos comprados
    vector<shared_ptr<Article>> articles;

    int numArticles;
    cout << "Cuantos articulos va a ingresar? ";
    cin >> numArticles;

    for (int i = 0; i < numArticles; ++i) {
        string code, name;
        double price;
        
        cout << "ID del producto "<<i<<":";
        cin >> code;
        cin.ignore();
        
        cout << "Nombre del producto"<<i<<":";
        getline(cin, name);
        
        cout << "Precio del producto"<<i<<":";
        cin >> price;
        cout << "" << endl;
        auto article = make_unique<Article>(code, name, price);
        articles.push_back(std::move(article));
    }

// Crear algunos empleados
    vector<shared_ptr<Employee>> employees;

    int numEmployees;
    cout << "Cuantos empleados va a ingresar? ";
    cin >> numEmployees;

    for (int i = 0; i < numEmployees; ++i) {
        string id, name, sucursal;
      
        cout << "ID del empleado"<<i<<":";
        cin >> id;
        cin.ignore(); // Ignorar el salto de línea anterior
    
        cout << "Nombre del Empleado"<<i<<":";
        getline(cin, name);

        cout << "Sucursal"<<i<<":";
        getline(cin, sucursal);
        cout << "" << endl;
        auto employee = make_shared<Employee>(id, name, sucursal);
        employees.push_back(employee);
    }

    // Crear algunos proovedores
    vector<shared_ptr<Provider>> providers;

    int numProvider;
    cout << "Cuantos proovedores va a ingresar? ";
    cin >> numProvider;

    for (int i = 0; i < numProvider; ++i) {
        string id, name, address;
        
        cout << "";
        cout << "ID del proovedor "<<i<<":";
        cin >> id;
        cin.ignore(); // Ignorar el salto de línea anterior
        
        cout << "Nombre del proovedor "<<i<<":";
        getline(cin, name);
        
        cout << "Direccion del proovedor "<<i<<":";
        getline(cin, address);
        
        auto provider = make_shared<Provider>(id, name, address);
        providers.push_back(provider);
    }


// Mostrar los proovedores cargados
    cout << "" << endl;
    cout << "PROOVEDORES:" << endl;
    for (size_t i = 0; i < providers.size(); ++i) {
        cout << "Posicion: " << i << endl;
        cout << "ID del proovedor: " << providers[i]->getCode() << endl;
        cout << "Nombre del proovedor: " << providers[i]->getName() << endl;
        cout << "Direccion del proovedor: " << providers[i]->getAddress() << endl;
        cout << "---------------------" << endl;
    }

    modifyProvider(providers);

// Mostrar los proovedores cargados
    cout << "" << endl;
    cout << "PROOVEDORES:" << endl;
    for (size_t i = 0; i < providers.size(); ++i) {
        cout << "Posicion: " << i << endl;
        cout << "ID del proovedor: " << providers[i]->getCode() << endl;
        cout << "Nombre del proovedor: " << providers[i]->getName() << endl;
        cout << "Direccion del proovedor: " << providers[i]->getAddress() << endl;
        cout << "---------------------" << endl;
    }

    deleteProvider(providers);


    // Crear ordenes para proovedores
    vector<shared_ptr<IOrder>> orders;

// Mostrar los artículos ingresados junto con su posicion
    cout << "" << endl;
    cout << "---------------------" << endl;
    cout << "ARTICULOS DISPONIBLES:" << endl;
    for (size_t i = 0; i < articles.size(); ++i) {
        cout << "Posicion: " << i << endl;
        cout << "ID del producto: " << articles[i]->getCode() << endl;
        cout << "Nombre del producto: " << articles[i]->getName() << endl;
        cout << "Precio del producto: " << articles[i]->getPrice() << endl;
        cout << "---------------------" << endl;
    }

    // Mostrar los proovedores cargados
    cout << "" << endl;
    cout << "PROOVEDORES:" << endl;
    for (size_t i = 0; i < providers.size(); ++i) {
        cout << "Posicion: " << i << endl;
        cout << "ID del proovedore: " << providers[i]->getCode() << endl;
        cout << "Nombre del proovedore: " << providers[i]->getName() << endl;
        cout << "Direccion del proovedore: " << providers[i]->getAddress() << endl;
        cout << "---------------------" << endl;
    }

    cout << "" << endl;
    int numOrder;
    int providerPos, employeePos;
    
    cout << "Cuantos ordenes va a realizar? ";
    cin >> numOrder;
        for (int i = 0; i < numOrder; ++i) {
        cout << "Posicion del proovedor: ";
        cin >> providerPos;
        auto order = make_shared<Order>("O00" + to_string(i + 1));
        order->setProvider(providers[providerPos]);

        int numArticles;
        cout << "Numero de productos para ingresar a la orden? ";
        cin >> numArticles;
            for (int j = 0; j < numArticles; ++j){
                int codeArticle;
                cout << "Posicion del producto: ";
                cin >> codeArticle;
                order->addArticle(articles[codeArticle]);
            }
    cout << "" << endl;
    cout << "EMPLEADOS:" << endl;
            for (size_t i = 0; i < employees.size(); ++i) {
                cout << "Posicion: " << i << endl;
                cout << "ID del empleado: " << employees[i]->getCode() << endl;
                cout << "Nombre del empleado: " << employees[i]->getName() << endl;
                cout << "Sucursal: " << employees[i]->getSucursal() << endl;
                cout << "---------------------" << endl;
    }
        cout << "Posicion del empleado que realizo la venta: ";
        cin >> employeePos;
        order->setEmployee(employees[employeePos]);
        
        // Agregar artículos a la orden
        orders.push_back(order);

    };
    
cout << "" << endl;
    // Mostrar las ordenes en la consola
    for (const auto& order : orders) {
        order->showOrder();
    }


    return 0;
}
// Implementacion de la funcion para modificar un proovedore
void modifyProvider(vector<shared_ptr<Provider>>& providers)
{
    std::vector<std::shared_ptr<Provider>>::size_type position;
    cout << "Ingresar la posicion del proovedor para cambiar sus datos: ";
    cin >> position;

    if (position < 0 || position >= providers.size()) {
        cout << "La posicion especificada no existe." << endl;
        return;
    }

    auto provider = providers[position];
    string id, name, address;

    cin.ignore(); // Ignorar el salto de línea anterior

    cout << "Nuevo ID del proovedor: ";
    getline(cin, id);
    cout << "Nuevo nombre del proovedor: ";
    getline(cin, name);
    cout << "Nueva direccion del proovedor: ";
    getline(cin, address);

    auto newProvider = make_shared<Provider>(id, name, address);
    providers[position] = newProvider;
    cout << "Proovedor modificado exitosamente." << endl;
}

// Implementacion de la funcion para eliminar un proovedore
void deleteProvider(vector<shared_ptr<Provider>>& providers)
{

     std::vector<std::shared_ptr<Provider>>::size_type position;
    cout << "Ingresar la posicion del proovedor para eliminarlo: ";
    cin >> position;

    if (position < 0 || position >= providers.size()) {
        cout << "La posicion especificada no existe." << endl;
        return;
    }

    providers.erase(providers.begin() + position);
    cout << "Proovedor eliminado exitosamente." << endl;
}
