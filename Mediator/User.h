#ifndef USER_H
#define USER_H
#include <iostream>
#include "Mediator.h"
using namespace std;


class Mediator;
class User
{
    public:
        User(Mediator* rhl);
        virtual ~User();
        virtual void SendMsg(string str) = 0;
        virtual void ReceiveMsg(string str) = 0;

    protected:
        string m_sMsg;
        Mediator* m_pMediator;
    private:

};

class ConcreteUserA:public User
{
    public:
        ConcreteUserA(Mediator* med);
        ~ConcreteUserA();
        void SendMsg(string str);
        void ReceiveMsg(string str);

    private:
        //Mediator* m_pMediator;


};

class ConcreteUserB:public User
{
    public:
        ConcreteUserB(Mediator* med);
        ~ConcreteUserB();
        void SendMsg(string str);
        void ReceiveMsg(string str);
    private:
        //Mediator* m_pMediator;

};

#endif // USER_H
