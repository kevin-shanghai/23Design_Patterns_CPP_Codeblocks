#include "Director.h"
#include <iostream>

Director::Director(Builder* bui):m_pBuilder(bui)
{
    std::cout<<"Director::Director()."<<std::endl;
}

Director::~Director()
{
    //dtor
}

void Director::CreateObject()
{
    m_pBuilder->BuildCPU();
    m_pBuilder->BuildMemory();
    m_pBuilder->BuildDisk();
    m_pBuilder->BuildKey();
    m_pBuilder->BuildMouse();
}
