#include <iostream>
#include "Context.h"
using namespace std;

int main()
{
    Strategy* stra = new StrategyA();
    Context* context1 = new Context(stra);
    context1->ContextOperation();

    stra = new StrategyB();
    Context* context2 = new Context(stra);

    context2->ContextOperation();

    return 0;
}
