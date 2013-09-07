#include <iostream>
#include "Director.h"
using namespace std;

int main()
{
    PcBuilder pc;
    LaptopBuilder lap;
    Director directorPC(&pc);
    directorPC.CreateObject();

    Director directorLap(&lap);
    directorLap.CreateObject();

    cout << "Hello world!" << endl;
    return 0;
}
