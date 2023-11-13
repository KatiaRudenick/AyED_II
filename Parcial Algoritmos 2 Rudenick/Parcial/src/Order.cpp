// Order.cpp
#include "Order.hpp"

Order::Order(string code):_code(code){}

string Order::getCode() const
{
    return _code;
}

void Order::setProvider(shared_ptr<IProvider> provider) 
{
    _provider = provider;
}

void Order::setEmployee(std::shared_ptr<IEmployee> employee) {
  _employee.push_back(std::move(employee));
}

void Order::addArticle(shared_ptr<IArticle> article) 
{
    _articles.push_back(article);
}

void Order::showOrder() 
{
    cout << "Orden "<< this->getCode() <<" para " << _provider->getName() << ", en domicilio:  " << _provider->getAddress() << ", hecha por  " << _employee[0]->getName() << " en sucursal:  " << _employee[0]->getSucursal() << ":\n"; // Se cambió para acceder al primer elemento del vector _employee
    for (const auto& article : _articles) 
    {
        cout << "  - " << article->getName() << " (" << article->getCode() << "): $" << article->getPrice() << "\n";
    }
}