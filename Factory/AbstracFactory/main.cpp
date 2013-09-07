#include <iostream>
#include "include/Factory.h"


using namespace std;

int main()
{
    Factory *facA = new FactoryA();
    Factory *facB = new FactoryB();
    facA->CreateProductA();
    facA->CreateProductB();
    facB->CreateProductB();
    facB->CreateProductA();
    cout << "Hello world!" << endl;
    return 0;
}
