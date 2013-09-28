#include <iostream>

#include "Context.h"
#include "State.h"
using namespace std;

int main()
{
    StateA* sta = new StateA();
    Context* con = new Context(sta);
    con->HandleForState();
    con->HandleForState();
    con->HandleForState();
    con->HandleForState();

    return 0;
}
