#ifndef RECEIVER_H
#define RECEIVER_H
#include <iostream>
#include <list>
#include "Command.h"
using namespace std;
//class CreateComputerCommand;

class Receiver
{
    public:
        Receiver();
        virtual ~Receiver();
        void AddTask(CreateComputerCommand* rhl);
        void DeleteTask(CreateComputerCommand* rhl);
        void Create();

    protected:

    private:
        list<CreateComputerCommand*>* m_pCreateComputerCommandList;
};

#endif // RECEIVER_H
