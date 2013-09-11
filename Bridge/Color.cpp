#include "Color.h"
#include <iostream>
using namespace std;

Color::Color():m_sColorName("")
{
    cout<<"Color::Color()."<<endl;
}

Color::~Color()
{
    cout<<"Color::~Color()."<<endl;
}

string Color::GetColorName()
{
    return this->m_sColorName;
}

Red::Red():m_sColorName("Red")
{
    cout<<"Red::Red()"<<endl;
}

Red::~Red()
{
    cout<<"Red::~Red()"<<endl;
}

string Red::GetColorName()
{
    return this->m_sColorName;
}

Green::Green():m_sColorName("Green")
{
    cout<<"Green::Green()."<<endl;
}

Green::~Green()
{
    cout<<"Green::~Green()."<<endl;
}

string Green::GetColorName()
{
    return this->m_sColorName;
}

Blue::Blue():m_sColorName("Blue")
{
    cout<<"Blue::Blue()."<<endl;
}

Blue::~Blue()
{
    cout<<"Blue::Blue()."<<endl;
}

string Blue::GetColorName()
{
    return this->m_sColorName;
}

