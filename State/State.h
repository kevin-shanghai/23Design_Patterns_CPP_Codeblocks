#ifndef STATE_H
#define STATE_H
#include "Context.h"

class Context;
class State
{
    public:
        State();
        virtual ~State();
        virtual void Handle(Context* con);

    protected:
    private:
};

class StateA:public State
{
    public:
        StateA();
        ~StateA();
        void Handle(Context* con);
};

class StateB:public State
{
    public:
        StateB();
        ~StateB();
        void Handle(Context* con);
};



#endif // STATE_H
