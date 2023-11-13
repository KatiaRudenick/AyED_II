#ifndef IARTICLE_HPP
#define IARTICLE_HPP
#pragma once

#include <iostream>
#include <string>

using namespace std;

class IArticle
{
    public:
        virtual string getCode()  const = 0;
        virtual string getName()  const = 0;
        virtual double getPrice()  const = 0;
};

#endif