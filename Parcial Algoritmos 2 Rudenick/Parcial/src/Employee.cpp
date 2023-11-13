#include <Employee.hpp>

Employee::Employee(string code, string name, string sucursal)
    : _code(code),
      _name(name),
      _sucursal(sucursal)
      {}

string Employee::getCode() const
{
    return _code;
}

string Employee::getName() const
{
    return _name;
}

string Employee::getSucursal() const
{
    return _sucursal; // O cualquier valor predeterminado o cadena vacía que desees
}