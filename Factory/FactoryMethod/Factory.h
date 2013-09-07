#ifndef __FACTORY_H__
#define __FACTORY_H__
#include "Product.h"
class Product;

class Factory
{
    public:
        virtual Product* CreateProduct1() = 0;
        virtual Product* CreateProduct2() = 0;
        virtual ~Factory();
    protected:
        Factory();

};

class ConcreteFactory:public Factory
{
    public:
        ConcreteFactory();
        virtual ~ConcreteFactory();
        virtual Product* CreateProduct1();
        virtual Product* CreateProduct2();
};

#endif
