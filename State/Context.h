#ifndef CONTEXT_H
#define CONTEXT_H
#include "State.h"

class State;

class Context
{
    public:
        Context(State* rhl);
        virtual ~Context();
        void ChangeState(State* sta);
        void HandleForState();

    protected:

    private:
        State* m_pState;
};

#endif // CONTEXT_H
