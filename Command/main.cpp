#include <iostream>
#include "Command.h"
#include "ComputerFactory.h"
#include "Receiver.h"

using namespace std;

int main()
{
    CreateComputerCommand* PCcmd = new CreatePCCommand();
    CreateComputerCommand* Laptopcmd = new CreateLaptopCommand();

    Receiver receiver;
    receiver.AddTask(PCcmd);
    receiver.AddTask(Laptopcmd);
    receiver.Create();

    receiver.DeleteTask(PCcmd);
    receiver.Create();
    return 0;
}
