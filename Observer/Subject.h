#ifndef SUBJECT_H
#define SUBJECT_H
#include <list>
#include <iostream>
using namespace std;

class Observer;
class Subject
{
    public:
        Subject();
        virtual ~Subject();
        void RegisterObserver(Observer* obs);
        void DeRegisterObserver(Observer* obs);
        void NotifyObservers();
        virtual void PrintState() = 0;
        virtual void SetState(string sta)=0;

    protected:

    private:
        list<Observer*>* Observer_list;
};

class SubjectA:public Subject
{
    public:
        SubjectA();
        ~SubjectA();
        void PrintState();
        void SetState(string sta);

    private:
        string m_pState;

};

class SubjectB:public Subject
{
    public:
        SubjectB();
        ~SubjectB();
        void PrintState();
        void SetState(string sta);

    private:
        string m_pState;
};

#endif // SUBJECT_H
