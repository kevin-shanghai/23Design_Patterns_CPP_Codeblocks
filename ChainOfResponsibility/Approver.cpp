#include "Approver.h"
#include <iostream>
using namespace std;


//***********implementation of class Approver*****************//
Approver::Approver():m_pApprover(NULL)
{
    //ctor
}

Approver::~Approver()
{
    //dtor
}

void Approver::HandleRequest(int num)
{

}

void Approver::SetApprover(Approver* app)
{
    m_pApprover = app;
}

Approver* Approver::GetApprover() const
{
    return m_pApprover;
}


//****************Implementation of class ProjectManager**************//

ProjectManager::ProjectManager()
{

}

ProjectManager::~ProjectManager()
{

}

void ProjectManager::HandleRequest(int num)
{
    if(num<5000 &&num> 0)
        cout<<"Approved by Project Manager."<<endl;
    else
        this->GetApprover()->HandleRequest(num);
}


//***************Implementation of class Director**************//

Director::Director()
{

}

Director::~Director()
{

}

void Director::HandleRequest(int num)
{
    if(num<10000 && num>5000)
        cout<<"Approved by Director."<<endl;
    else
        this->GetApprover()->HandleRequest(num);
}



//**************implementation of class VicePresident******************//

VicePresident::VicePresident()
{

}

VicePresident::~VicePresident()
{

}

void VicePresident::HandleRequest(int num)
{
    if(num>10000)
        cout<<"Approved by Vice President."<<endl;
    else
        this->GetApprover()->HandleRequest(num);
}









