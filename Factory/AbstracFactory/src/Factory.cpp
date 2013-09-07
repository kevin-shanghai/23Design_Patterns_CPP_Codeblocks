#include <iostream>
using namespace std;
#include "include/Factory.h"
#include "include/ProductA.h"
#include "include/ProductB.h"

Factory::Factory()
{
    cout<<"Factory::Factory()."<<std::endl;
}

Factory::~Factory()
{
    cout<<"Factory::~Factory()."<<std::endl;
}

FactoryA::FactoryA()
{
    cout<<"FactoryA::FactoryA()."<<std::endl;
}

FactoryA::~FactoryA()
{
    cout<<"FactoryA::~FactoryA()."<<std::endl;
}

FactoryB::FactoryB()
{
    cout<<"FactoryB::FactoryB()."<<std::endl;
}

FactoryB::~FactoryB()
{
   cout<<"FactoryB::~FactoryB()."<<std::endl;
}

ProductA* FactoryA::CreateProductA()
{
    return new ProductA1();
}

ProductB* FactoryA::CreateProductB()
{
    return new ProductB2();
}

ProductA* FactoryB::CreateProductA()
{
    return new ProductA2();
}

ProductB* FactoryB::CreateProductB()
{
    return new ProductB1();
}
