#include <iostream>
#include "Facade.h"

using namespace std;

int main()
{
    Facade* fac = new Facade();
    fac->OperationWrapper();

    cout << "Hello world!" << endl;
    return 0;
}
