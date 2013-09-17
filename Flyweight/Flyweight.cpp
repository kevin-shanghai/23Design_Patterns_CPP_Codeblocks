#include "Flyweight.h"

//********************Implementation of class Flyweight********************
//*************************************************************************


Flyweight::Flyweight(string status):m_pStatus(status)
{

}

Flyweight::~Flyweight()
{
    cout<<"Flyweight::~Flyweight()."<<endl;
}

void Flyweight::operation()
{
    cout<<"Flyweight::operation()."<<endl;
}

string Flyweight::GetInstanceStatus() const
{
    return m_pStatus;
}

//********************Implementation of class ConcreteFlyweight************
//*************************************************************************

ConcreteFlyweight::ConcreteFlyweight(string rhl):Flyweight(rhl)
{
    cout<<"Create instance:"<<rhl<<endl;
}

ConcreteFlyweight::~ConcreteFlyweight()
{
    cout<<"ConcreteFactory::~ConcreteFactory()."<<endl;
}

void ConcreteFlyweight::operation()
{
    cout<<"ConcreteFactory::operation()."<<endl;
}

//********************Implementation of class FlyweightFactory************
//********************==*****************************************************

FlyweightFactory::FlyweightFactory()
{
    //cout<<"FlyweightFactory::FlyweightFactory()."<<endl;
}

FlyweightFactory::~FlyweightFactory()
{
    cout<<"FlyweightFactory::~FlyweightFactory()."<<endl;
}

Flyweight* FlyweightFactory::GetInstance(string status)
{
    list<Flyweight*>::iterator fly_iter;
    for(fly_iter = m_lfly.begin();fly_iter!=m_lfly.end();fly_iter++)
        {
            if((*fly_iter)->GetInstanceStatus() == status )
                {
                    cout<<"This instance "<<"\""<<status<<"\""<< " have been created."<<endl;
                    return *fly_iter;
                }
        }
    Flyweight *NewInstance = new ConcreteFlyweight(status);
    m_lfly.push_back(NewInstance);
    return NewInstance;
}
