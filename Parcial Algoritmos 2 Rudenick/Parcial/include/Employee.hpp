#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP
#pragma once

#include <IEmployee.hpp>

using namespace std;

class Employee : public IEmployee
{
    public:
        Employee(string code, string name, string sucursal);
        string getCode() const;
        string getName() const;
        string getSucursal() const;

        
    private:
        string _code;
        string _name;
        string _sucursal;
    
};

#endif