#include <iostream>
#include "Proxy.h"

using namespace std;

int main()
{
    SubObject* sub = new SubObject();
    Proxy* pro = new Proxy(sub);
    pro->Request();
    cout << "Hello world!" << endl;
    return 0;
}
