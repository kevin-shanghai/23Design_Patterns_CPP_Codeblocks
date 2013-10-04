#include "Command.h"
#include <iostream>
using namespace std;

CreateComputerCommand::CreateComputerCommand()
{
    //ctor
}

CreateComputerCommand::~CreateComputerCommand()
{
    //dtor
}

CreatePCCommand::CreatePCCommand()
{

}

CreatePCCommand::~CreatePCCommand()
{

}

void CreatePCCommand::Excute()
{
    m_pComputerFactory->CreatePC();
}

CreateLaptopCommand::CreateLaptopCommand()
{

}

CreateLaptopCommand::~CreateLaptopCommand()
{

}

void CreateLaptopCommand::Excute()
{
    m_pComputerFactory->CreateLaptop();
}


