#include "Receiver.h"
#include <iostream>




Receiver::Receiver():m_pCreateComputerCommandList(new list<CreateComputerCommand*>())
{

}

Receiver::~Receiver()
{
    //dtor
}

void Receiver::AddTask(CreateComputerCommand* rhl)
{
    m_pCreateComputerCommandList->push_back(rhl);
}

void Receiver::DeleteTask(CreateComputerCommand* rhl)
{
    m_pCreateComputerCommandList->remove(rhl);
}

void Receiver::Create()
{
    list<CreateComputerCommand*>::iterator iter = m_pCreateComputerCommandList->begin();
    for(;iter!=m_pCreateComputerCommandList->end();iter++)
        {
            (*iter)->Excute();
        }

}
