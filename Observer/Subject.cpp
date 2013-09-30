#include "Subject.h"
#include "Observer.h"

class Observer;

Subject::Subject()
{
    Observer_list = new list<Observer*>;
}

Subject::~Subject()
{
    //dtor
}

void Subject::RegisterObserver(Observer* obs)
{
    Observer_list->push_front(obs);
}

void Subject::DeRegisterObserver(Observer* obs)
{
    if(obs!=NULL)
        Observer_list->remove(obs);
}

void Subject::NotifyObservers()
{
    list<Observer*>::iterator it;
    for(it=Observer_list->begin();it!=Observer_list->end();it++)
        (*it)->update(this);
}


SubjectA::SubjectA()
{
    //m_pState = NULL;
}

SubjectA::~SubjectA()
{

}

void SubjectA::SetState(string sta)
{
    m_pState = sta;
}

void  SubjectA::PrintState()
{
    cout<<"In SubjectA, State is: "<<m_pState<<endl;
}

SubjectB::SubjectB()
{

}

SubjectB::~SubjectB()
{

}

void SubjectB::SetState(string sta)
{
    m_pState = sta;
}

void SubjectB::PrintState()
{
    cout<<"In SubjectB, State is: "<<m_pState<<endl;
}

