#include "Observer.h"

Observer::Observer()
{
    //ctor
}

Observer::~Observer()
{
    //dtor
}

ObserverA::ObserverA(Subject* sub):m_pSub(sub)
{

}

ObserverA::~ObserverA()
{

}

void ObserverA::update(Subject* suba)
{
    suba->PrintState();
}

ObserverB::ObserverB(Subject* sub):m_pSub(sub)
{

}

ObserverB::~ObserverB()
{

}

void ObserverB::update(Subject* subb)
{
    subb->PrintState();
}
