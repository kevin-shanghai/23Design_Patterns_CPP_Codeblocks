#include "State.h"
#include <iostream>
using namespace std;

State::State()
{

}

State::~State()
{

}

void State::Handle(Context* con)
{

}

StateA::StateA()
{

}

StateA::~StateA()
{

}

StateB::StateB()
{

}

StateB::~StateB()
{

}

void StateA::Handle(Context* con)
{
    cout<<"StateA:Handle(Context* con)."<<endl;
    con->ChangeState(new StateB);
}

void StateB::Handle(Context* con)
{
    cout<<"StateB::Handle(Context* con)."<<endl;
    con->ChangeState(new StateA);
}
