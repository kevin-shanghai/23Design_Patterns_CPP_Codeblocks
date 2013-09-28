#include "Strategy.h"
#include <iostream>
using namespace std;

Strategy::Strategy()
{
    //ctor
}

Strategy::~Strategy()
{
    //dtor
}

void Strategy::operation()
{

}

void StrategyA::operation()
{
    cout<<"StrategyA::operation()."<<endl;
}

void StrategyB::operation()
{
    cout<<"StrategyB::operation()."<<endl;
}
