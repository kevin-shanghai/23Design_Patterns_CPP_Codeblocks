#ifndef OBSERVER_H
#define OBSERVER_H
#include "Subject.h"
class Subject;

class Observer
{
    public:
        Observer();
        virtual ~Observer();
        virtual void update(Subject* sub) = 0;
    protected:
    private:
};

class ObserverA:public Observer
{
    public:
        ObserverA(Subject* sub);
        ~ObserverA();
        void update(Subject* sub);

    private:
        Subject* m_pSub;
};

class ObserverB:public Observer
{
    public:
        ObserverB(Subject* sub);
        ~ObserverB();
        void update(Subject* sub);

    private:
        Subject* m_pSub;
};

#endif // OBSERVER_H
