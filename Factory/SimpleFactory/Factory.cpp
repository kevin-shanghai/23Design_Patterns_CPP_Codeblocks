#include "Factory.h"
#include <iostream>
#include "Product.h"
using namespace std;

Factory::Factory()
{
    //ctor
}

Factory::~Factory()
{
    //dtor
}

Product* Factory::CreateProduct(std::string ProductName)
{
    if(ProductName == "ProductA")
        return new ProductA();
    else if(ProductName == "ProductB")
        return new ProductB();

}
