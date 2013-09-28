#include "Context.h"
#include <iostream>
using namespace std;


Context::Context(Strategy* rhl):m_pStrategy(rhl)
{

}

Context::~Context()
{

}

void Context::ContextOperation()
{
    cout<<"Context::ContextOperation()."<<endl;
    m_pStrategy->operation();
}

