#include "Template.h"
#include <iostream>
using namespace std;


Template::Template()
{

}

Template::~Template()
{

}


void Template::TemplateMethod_Live()
{
    this->Eat();
    this->Sleep();
}

void Dog::Eat()
{
    cout<<"Dog::Eat()."<<endl;
}

void Dog::Sleep()
{
    cout<<"Dog::Sleep()."<<endl;
}

void Cat::Eat()
{
    cout<<"Cat::Eat()."<<endl;
}

void Cat::Sleep()
{
    cout<<"Cat::Sleep()."<<endl;
}
