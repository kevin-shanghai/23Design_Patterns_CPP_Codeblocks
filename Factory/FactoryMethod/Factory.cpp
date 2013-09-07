#include "Factory.h"
#include <iostream>
using namespace std;

Factory::Factory()
{
    cout<<"Factory::Factory();"<<endl;
}

Factory::~Factory()
{
    cout<<"Factory::~Factory()"<<endl;
}


ConcreteFactory::ConcreteFactory()
{
    cout<<"ConcreteFactory::ConcreteFactory();"<<endl;
}

ConcreteFactory::~ConcreteFactory()
{
    cout<<"ConcreteFactory::~ConcreteFactory();"<<endl;
}

Product* ConcreteFactory::CreateProduct1()
{
    return new ChildProduct1();
}

Product* ConcreteFactory::CreateProduct2()
{
    return new ChildProduct2();
}
