#include <iostream>
#include "Decorator.h"

using namespace std;

int main()
{
    Animal* pa = new Dog();
    pa->eat();

    Decorator *p = new ConcreteDecorator(pa);
    p->eat();

    cout << "Hello world!" << endl;
    return 0;
}
