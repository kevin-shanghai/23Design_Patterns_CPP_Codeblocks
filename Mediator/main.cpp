#include <iostream>
#include "Mediator.h"
#include "User.h"

using namespace std;

int main()
{
    ConcreteMediator* med = new ConcreteMediator();
    ConcreteUserA* usrA = new ConcreteUserA(med);
    ConcreteUserB* usrB = new ConcreteUserB(med);

    med->SetUserA(usrA);
    med->SetUserB(usrB);
    usrA->SendMsg("Hello, UserB");
    usrB->SendMsg("Hello, UserA");

    return 0;
}
