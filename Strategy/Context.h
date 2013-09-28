#ifndef CONTEXT_H
#define CONTEXT_H
#include "Strategy.h"

class Strategy;

class Context
{
    public:
        Context(Strategy* rhl);
        virtual ~Context();
        void ContextOperation();

    protected:
    private:
        Strategy* m_pStrategy;
};

#endif // CONTEXT_H
