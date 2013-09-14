#include "Decorator.h"
#include <iostream>
using namespace std;

Animal::Animal()
{
    cout<<"Animal::Animal()."<<endl;
}

Animal::~Animal()
{
    cout<<"Animal::~Animal()."<<endl;
}

void Animal::eat()
{
    cout<<"Animal::eat()."<<endl;
}

Dog::Dog()
{
    cout<<"Dog::Dog()."<<endl;
}

Dog::~Dog()
{
    cout<<"Dog::~Dog()."<<endl;
}

void Dog::eat()
{
    cout<<"Dog::eat()*****Have bone!"<<endl;
}

Decorator::Decorator(Animal* rhl)
{
    m_pAnimal = rhl;
}

Decorator::~Decorator()
{
    cout<<"Decorator::~Decorator()."<<endl;
}

void Decorator::eat()
{
    cout<<"Decorator::eat()"<<endl;
}

ConcreteDecorator::ConcreteDecorator(Animal* rhl):Decorator(rhl)
{
    cout<<"ConcreteDecorator::ConcreteDecorator(Animal* rhl)."<<endl;
}

ConcreteDecorator::~ConcreteDecorator()
{
    cout<<"ConcreteDecorator::~ConcreteDecorator()."<<endl;
}

void ConcreteDecorator::eat()
{
    cout<<"ConcreteDecorator::eat()******Have some soupe!"<<endl;
    m_pAnimal->eat();
}
