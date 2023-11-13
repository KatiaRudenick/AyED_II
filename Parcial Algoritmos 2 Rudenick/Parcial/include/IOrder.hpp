#ifndef IORDER_HPP
#define IORDER_HPP
#pragma once

#include <IProvider.hpp>
#include <IArticle.hpp>
#include <IEmployee.hpp>

class IOrder 
{
	public:
		virtual string getCode() const = 0; 
		virtual void setProvider(shared_ptr<IProvider> provider) = 0;
		virtual void setEmployee(shared_ptr<IEmployee> employee) = 0;
		virtual void addArticle(shared_ptr<IArticle> article) = 0;
		virtual void showOrder() = 0;
};

#endif