#include <iostream>
#include "Singleton.h"
using namespace std;

int main()
{
    Singleton* instance1 = Singleton::GetInstance();
    Singleton* instance2 = Singleton::GetInstance();
    cout<<instance1<<endl;
    cout<<instance2<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
