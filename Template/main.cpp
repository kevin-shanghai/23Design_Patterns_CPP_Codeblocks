#include <iostream>
#include "Template.h"
using namespace std;

int main()
{
    Template* dog = new Dog();
    Template* cat = new Cat();
    dog->TemplateMethod_Live();
    cat->TemplateMethod_Live();

    cout << "Hello world!" << endl;
    return 0;
}
