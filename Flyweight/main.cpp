#include <iostream>
#include "Flyweight.h"
using namespace std;

int main()
{
    FlyweightFactory* fac1 = new FlyweightFactory();
    fac1->GetInstance("kevin");
    fac1->GetInstance("kobe");
    fac1->GetInstance("james");
    fac1->GetInstance("kevin");     //The instance "kevin" which will not be created any more
    fac1->GetInstance("james");
    fac1->GetInstance("wade");
    cout << "*******************************" << endl;
    return 0;
}
