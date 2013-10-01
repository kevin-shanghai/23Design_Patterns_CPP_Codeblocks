#include "User.h"

User::User(Mediator* med):m_pMediator(med), m_sMsg("")
{
    //m_sMsg = "";
}

User::~User()
{
    //dtor
}



ConcreteUserA::ConcreteUserA(Mediator* med):User(med)
{

}

ConcreteUserA::~ConcreteUserA()
{

}

void ConcreteUserA::SendMsg(string str)
{
    this->m_pMediator->SendMsgFromA2B(str);
}

void ConcreteUserA::ReceiveMsg(string str)
{
    cout<<"In ConcreteUserA, Msg is: "<<str<<endl;
}

ConcreteUserB::ConcreteUserB(Mediator* med):User(med)
{
    m_sMsg = "";
}

ConcreteUserB::~ConcreteUserB()
{

}

void ConcreteUserB::SendMsg(string str)
{
    m_sMsg = str;
    m_pMediator->SendMsgFromB2A(str);
}

void ConcreteUserB::ReceiveMsg(string msg)
{
    cout<<"In ConcreteUserB, Msg is: "<<msg<<endl;
}




