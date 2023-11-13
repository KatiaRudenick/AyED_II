#ifndef PROVIDER_HPP
#define PROVIDER_HPP
#pragma once

#include <IProvider.hpp>

using namespace std;

class Provider : public IProvider
{
    public:
        Provider(string code, string name, string address);
        string getCode() const;
        string getName() const;
        string getAddress() const;
        
    private:
        string _code;
        string _name;
        string _address;
};

#endif