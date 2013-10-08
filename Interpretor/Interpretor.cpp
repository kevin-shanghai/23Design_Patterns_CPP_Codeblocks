#include "Interpretor.h"
#include <iostream>
using namespace std;

AbstractExpression::AbstractExpression()
{
    //ctor
}

AbstractExpression::~AbstractExpression()
{
    //dtor
}

void AbstractExpression::Interpreter(Context* con)
{

}

TerminalExpression::TerminalExpression()
{

}

TerminalExpression::~TerminalExpression()
{

}

void TerminalExpression::Interpreter(Context* con)
{
    con->SetOutput("Terminal: "+ con->GetInput());
    cout<<con->GetOutput()<<endl;
}


NonTerminalExpression::NonTerminalExpression()
{

}


NonTerminalExpression::~NonTerminalExpression()
{

}
void NonTerminalExpression::Interpreter(Context* con)
{
    con->SetOutput("Nonterminal: "+con->GetInput());
    cout<<con->GetOutput()<<endl;
}

