#include "ComputerFactory.h"
#include <iostream>
using namespace std;

ComputerFactory::ComputerFactory()
{
    //ctor
}

ComputerFactory::~ComputerFactory()
{
    //dtor
}

void ComputerFactory::CreateLaptop()
{
    std::cout<<"Laptop was created."<<std::endl;
}

void ComputerFactory::CreatePC()
{
    std::cout<<"PC was created."<<std::endl;
}
