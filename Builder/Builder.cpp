#include "Builder.h"
#include <iostream>
using namespace std;

Builder::Builder()
{

}

Builder::~Builder()
{

}

PcBuilder::PcBuilder()
{
    cout<<"PcBuilder::PcBuilder()"<<endl;
}

PcBuilder::~PcBuilder()
{
    cout<<"PcBuilder::~PcBuilder()"<<endl;
}

void PcBuilder::BuildCPU() const
{
    cout<<"PcBuilder::BuilderCPU()."<<endl;
}

void PcBuilder::BuildDisk() const
{
    cout<<"PcBuilder::BuildDisk()."<<endl;
}

void PcBuilder::BuildMemory() const
{
    cout<<"PcBuilder::BuildMemory()"<<endl;
}

void PcBuilder::BuildKey() const
{
    cout<<"PcBuilder::BuildKey()"<<endl;
}

void PcBuilder::BuildMouse() const
{
    cout<<"PcBuilder::BuildMouse()"<<endl;
}

LaptopBuilder::LaptopBuilder()
{
    cout<<"LaptopBuilder::LaptopBuilder()"<<endl;
}

LaptopBuilder::~LaptopBuilder()
{
    cout<<"LaptopBuilder::~LaptopBuilder()"<<endl;
}

void LaptopBuilder::BuildCPU() const
{
    cout<<"LaptopBuilder::BuildCPU()"<<endl;
}

void LaptopBuilder::BuildMemory() const
{
    cout<<"LaptopBuilder::BuildMemory()"<<endl;
}

void LaptopBuilder::BuildDisk() const
{
    cout<<"LaptopBuilder::BuildDisk()"<<endl;
}

void LaptopBuilder::BuildKey() const
{
    cout<<"LaptopBuilder::BuildKey()"<<endl;
}

void LaptopBuilder::BuildMouse() const
{
    cout<<"LaptopBuilder::BuildMouse()"<<endl;
}
