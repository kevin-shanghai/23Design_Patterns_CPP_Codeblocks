#ifndef COMMAND_H
#define COMMAND_H
#include "ComputerFactory.h"
class ComputerFactory;

class CreateComputerCommand
{
    public:
        CreateComputerCommand();
        virtual ~CreateComputerCommand();
        virtual void Excute() = 0;

    protected:
    private:

};

class CreatePCCommand:public CreateComputerCommand
{
    public:
        CreatePCCommand();
        ~CreatePCCommand();
        virtual void Excute();

    private:
        ComputerFactory* m_pComputerFactory;

};

class CreateLaptopCommand:public CreateComputerCommand
{
    public:
        CreateLaptopCommand();
        ~CreateLaptopCommand();
        void Excute();

    protected:

    private:
        ComputerFactory* m_pComputerFactory;
};

#endif // COMMAND_H
