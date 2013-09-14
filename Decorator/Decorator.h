#ifndef DECORATOR_H
#define DECORATOR_H
#include <iostream>
using namespace std;


class Animal
{
    public:
        Animal();
        ~Animal();
        virtual void eat();

    protected:

    private:


};

class Dog:public Animal
{
    public:
        Dog();
        ~Dog();
        virtual void eat();

};




class Decorator:public Animal
{
    public:
        Decorator(Animal* rhl);
        virtual ~Decorator();
        virtual void eat();

    protected:
        Animal* m_pAnimal;
    private:
        Decorator();


};

class ConcreteDecorator:public Decorator
{
    public:
        ConcreteDecorator(Animal* rhl);
        ~ConcreteDecorator();
        virtual void eat();
};

#endif // DECORATOR_H
