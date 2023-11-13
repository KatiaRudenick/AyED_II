#ifndef ARTICLE_HPP
#define ARTICLE_HPP
#pragma once

#include <IArticle.hpp>

using namespace std;

class Article : public IArticle
{
    public:
        Article(string code, string name, double price); 
        string getCode() const;
        string getName() const;
        double getPrice() const;
    private:
        string _code;
        string _name;
        double _price;
};

#endif