#include <iostream>
#include "Singleton.h"

using namespace std;

Singleton* Singleton::m_Instance = 0;
Singleton::Singleton()
{
    cout<<"Singleton::Singleton()."<<endl;
}

Singleton::~Singleton()
{

}

Singleton* Singleton::GetInstance()
{
    if(m_Instance == 0)
        m_Instance = new Singleton();
    return m_Instance;
}
