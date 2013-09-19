#include "Facade.h"
#include <iostream>
using namespace std;

Facade::Facade():m_pSub1(new SubSystem1), m_pSub2(new SubSystem2), m_pSub3(new SubSystem3)
{

}

Facade::~Facade()
{
    delete m_pSub1;
    delete m_pSub2;
    delete m_pSub3;
}

void SubSystem1::Operation()
{
    cout<<"SubSystem1::Operation()."<<endl;
}

void SubSystem2::Operation()
{
    cout<<"SubSystem2::Operation()"<<endl;
}

void SubSystem3::Operation()
{
    cout<<"SubSystem3::Operation()"<<endl;
}



void Facade::OperationWrapper()
{
    m_pSub1->Operation();
    m_pSub2->Operation();
    m_pSub3->Operation();
}
