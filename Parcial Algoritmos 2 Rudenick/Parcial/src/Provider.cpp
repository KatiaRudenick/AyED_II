#include <Provider.hpp>

Provider::Provider(string code, string name, string address)
    : _code(code),
      _name(name),
      _address(address){}

string Provider::getCode() const
{
    return _code;
}

string Provider::getName() const
{
    return _name;
}

string Provider::getAddress() const
{
    return _address;
}
