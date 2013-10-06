#include <iostream>
#include "Approver.h"

using namespace std;

int main()
{

    Approver* manager = new ProjectManager();
    Approver* director = new Director();
    Approver* vp = new VicePresident();

    manager->SetApprover(director);
    director->SetApprover(vp);

    manager->HandleRequest(3000);
    manager->HandleRequest(6000);
    manager->HandleRequest(60000);

    return 0;
}
