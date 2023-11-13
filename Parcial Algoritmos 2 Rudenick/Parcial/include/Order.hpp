// Order.hpp
#ifndef ORDER_HPP
#define ORDER_HPP
#pragma once

#include <iostream>
#include <memory>
#include <vector>
#include <IOrder.hpp>
#include <Employee.hpp>

using namespace std;

class Order : public IOrder
{
    public:
        Order(string code);
        string getCode() const;
        void setProvider(shared_ptr<IProvider> provider);
        void setEmployee(shared_ptr<IEmployee> employee);
        void addArticle(shared_ptr<IArticle> article);
        void showOrder();        
    private:
        string _code;
        shared_ptr<IProvider> _provider;
        vector<shared_ptr<IEmployee>> _employee; // Se cambió de vector<shared_ptr<IProvider>>
        vector<shared_ptr<IArticle>> _articles;
        
};

#endif