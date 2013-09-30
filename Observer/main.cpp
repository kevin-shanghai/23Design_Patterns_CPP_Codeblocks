#include <iostream>
#include "Observer.h"
#include "Subject.h"

using namespace std;

int main()
{
    Subject* suba = new SubjectA();

    Observer* obs1 = new ObserverA(suba);
    Observer* obs2 = new ObserverB(suba);

    cout<<"************* From Observer1's point of view ************"<<endl;
    suba->RegisterObserver(obs1);
    suba->SetState("Old State");
    suba->NotifyObservers();

cout<<"*** From Both Observer1 and Observer2's point of view ***"<<endl;
    suba->RegisterObserver(obs2);
    suba->SetState("New State");
    suba->NotifyObservers();
    return 0;
}
