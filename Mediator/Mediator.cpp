#include "Mediator.h"

Mediator::Mediator()
{
    //ctor
}

Mediator::~Mediator()
{
    //dtor
}

void Mediator::SendMsgFromA2B(string str)
{

}

void Mediator::SendMsgFromB2A(string str)
{

}

void Mediator::SetUserA(User* user)
{

}

void Mediator::SetUserB(User* user)
{

}

ConcreteMediator::ConcreteMediator()
{

}

ConcreteMediator::~ConcreteMediator()
{

}

void ConcreteMediator::SetUserA(User* user)
{
    m_pConUserA = user;
}

void ConcreteMediator::SetUserB(User* user)
{
    m_pConUserB = user;
}

void ConcreteMediator::SendMsgFromA2B(string str)
{
    m_pConUserB->ReceiveMsg(str);
}

void ConcreteMediator::SendMsgFromB2A(string str)
{
    m_pConUserA->ReceiveMsg(str);
}
