#include <iostream>
#include "Factory.h"
#include "Product.h"


int main()
{
    Factory* factory = new ConcreteFactory();
    factory->CreateProduct1();
    factory->CreateProduct2();

    return 0;
}
