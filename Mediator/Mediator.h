#ifndef MEDIATOR_H
#define MEDIATOR_H
#include "User.h"
#include <iostream>
using namespace std;

class User;
class ConcreteUserA;
class ConcreteUserB;
class Mediator
{
    public:
        Mediator();
        virtual ~Mediator();
        virtual void SendMsgFromA2B(string str);
        virtual void SendMsgFromB2A(string str);
        virtual void SetUserA(User* user);
        virtual void SetUserB(User* user);
    protected:

    private:

};

class ConcreteMediator:public Mediator
{
    public:
        ConcreteMediator();
        ~ConcreteMediator();
        void SendMsgFromA2B(string str);
        void SendMsgFromB2A(string str);
        void SetUserA(User* user);
        void SetUserB(User* user);

    private:
        User* m_pConUserA;
        User* m_pConUserB;


};

#endif // MEDIATOR_H
