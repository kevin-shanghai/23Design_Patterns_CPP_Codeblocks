#include <iostream>
#include "Prototype.h"

using namespace std;

int main()
{
    Prototype *pro1 = new Prototype1();
    Prototype *pro1_clone = pro1->clone();

    Prototype *pro2 = new Prototype2();
    Prototype *pro2_clone = pro2->clone();

    cout << "Hello world!" << endl;
    return 0;
}
