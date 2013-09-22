#include "Proxy.h"
#include <iostream>
using namespace std;

Object::Object()
{

}

Object::~Object()
{

}


SubObject::SubObject()
{

}

SubObject::~SubObject()
{

}

void SubObject::Request()
{
    cout<<"SubObject::Request()."<<endl;
}


Proxy::Proxy(Object* rhl):m_pObject(rhl)
{

}

Proxy::~Proxy()
{
    delete m_pObject;
}

void Proxy::Request()
{
    cout<<"Proxy::Request()."<<endl;
    m_pObject->Request();
}
