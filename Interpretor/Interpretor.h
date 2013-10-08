#ifndef INTERPRETOR_H
#define INTERPRETOR_H
#include "Context.h"

class AbstractExpression
{
    public:
        AbstractExpression();
        virtual ~AbstractExpression();
        virtual void Interpreter(Context* con) = 0;
    protected:
    private:
};

class TerminalExpression:public AbstractExpression
{
    public:
        TerminalExpression();
        ~TerminalExpression();
        virtual void Interpreter(Context* con);
};

class NonTerminalExpression:public AbstractExpression
{
    public:
        NonTerminalExpression();
        ~NonTerminalExpression();
        virtual void Interpreter(Context* con);
};

#endif // INTERPRETOR_H
