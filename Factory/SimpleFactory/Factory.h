#ifndef FACTORY_H
#define FACTORY_H
#include <iostream>

using namespace std;

class Product;

class Factory
{
    public:
        Factory();
        Product* CreateProduct(std::string ProductName);
        ~Factory();

    protected:

    private:

};

#endif // FACTORY_H
