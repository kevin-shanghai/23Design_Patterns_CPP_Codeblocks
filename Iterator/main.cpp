#include <iostream>
#include "Container.h"
#include "Iterator.h"

using namespace std;

int main()
{
    Container* container = new ConcreteContainer(5);
    Iterator* iter = new ConcreteIterator(container);
    for(; iter->end() == false;iter->next())
        {
            cout<<"In Container: "<<iter->GetCurrentItem()<<endl;
        }
    return 0;
}
