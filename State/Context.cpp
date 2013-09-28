#include "Context.h"

Context::Context(State* rhl):m_pState(rhl)
{
    //ctor
}

Context::~Context()
{
    //dtor
}

void Context::ChangeState(State* sta)
{
    m_pState = sta;
}

void Context::HandleForState()
{
    m_pState->Handle(this);
}


