#include <iostream>
#include "Factory.h"

using namespace std;

int main()
{
    Factory *fac = new Factory();
    fac->CreateProduct("ProductA");
    fac->CreateProduct("ProductB");

    cout << "Hello world!" << endl;
    return 0;
}
