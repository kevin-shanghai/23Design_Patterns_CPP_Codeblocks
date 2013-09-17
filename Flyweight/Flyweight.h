#ifndef FLYWEIGHT_H
#define FLYWEIGHT_H
#include <iostream>
#include <list>
using namespace std;



class Flyweight
{
    public:
        Flyweight(string status);
        virtual ~Flyweight();
        virtual void operation();
        string GetInstanceStatus() const;
    protected:

    private:

        string m_pStatus;
};

class ConcreteFlyweight:public Flyweight
{
    public:
        ConcreteFlyweight(string rhl);
        ~ConcreteFlyweight();
        void operation();
};

class FlyweightFactory
{
    public:
        FlyweightFactory();
        ~FlyweightFactory();
        Flyweight* GetInstance(string status);

    private:
        list <Flyweight*> m_lfly;
};


#endif // FLYWEIGHT_H
