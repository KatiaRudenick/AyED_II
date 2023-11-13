#ifndef IEMPLOYEE_HPP
#define IEMPLOYEE_HPP
#pragma once

#include <iostream>
#include <string>

using namespace std;

class IEmployee
{
    public:
        virtual string getCode()  const = 0;
        virtual string getName()  const = 0;
        virtual string getSucursal()  const = 0;
};

#endif