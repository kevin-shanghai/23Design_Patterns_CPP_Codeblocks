#include <iostream>
#include "Context.h"
#include "Interpretor.h"

using namespace std;

int main()
{
    Context* con1 = new Context("Hello world.");
    AbstractExpression* tinter = new TerminalExpression();
    AbstractExpression* nont = new NonTerminalExpression();

    tinter->Interpreter(con1);
    nont->Interpreter(con1);

    return 0;
}
