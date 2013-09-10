#include "Prototype.h"
#include <iostream>
using namespace std;


Prototype::Prototype()
{
     cout<<"Prototype::Prototype()."<<endl;
}

Prototype::~Prototype()
{
    cout<<"Prototype::~Prototype()."<<endl;
}

Prototype* Prototype::clone() const
{
    cout<<"virtual Prototype* clone() const."<<endl;
}

Prototype1::Prototype1()
{
    cout<<"Prototype1::Prototype1()."<<endl;
}

Prototype1::~Prototype1()
{
    cout<<"Prototype1::~Prototype1()."<<endl;
}

Prototype1::Prototype1(const Prototype1& pro)
{
    cout<<"Prototype1::Prototype1(const Prototype1& pro)."<<endl;
}

Prototype* Prototype1::clone() const
{
    return new Prototype1(*this);
}

Prototype2::Prototype2()
{
    cout<<"Prototype2::Prototype2()."<<endl;
}

Prototype2::~Prototype2()
{
    cout<<"Prototype2::~Prototype2()."<<endl;
}

Prototype2::Prototype2(const Prototype2& pro)
{
    cout<<"Prototype2::Prototype2(const Prototype2& pro)."<<endl;
}

Prototype* Prototype2::clone() const
{
    return new Prototype2(*this);
}

