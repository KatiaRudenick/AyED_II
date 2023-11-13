#ifndef IPROVIDER_HPP
#define IPROVIDER_HPP
#pragma once

#include <iostream>
#include <string>

using namespace std;

class IProvider
{
    public:
        virtual string getCode()  const = 0;
        virtual string getName()  const = 0;
        virtual string getAddress()  const = 0;
};

#endif