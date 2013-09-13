#include <iostream>
using namespace std;

class Target
{
    public:
        Target(){}
        ~Target(){}
        void Request(){cout<<"Target::Request()."<<endl;}
};

class Adaptee
{
    public:
        Adaptee(){}
        ~Adaptee(){}
        void SpecificRequest()
            {
                cout<<"Adaptee::SpecificRequest()."<<endl;
            }
};

class Adapter:public Target, public Adaptee
{

    public:
        Adapter()
            {
                cout<<"Adapter::Adapter()."<<endl;
            }
        void Request()
            {
                this->SpecificRequest();
            }
};


int main()
{
    Adapter Adap;
    Adap.Request();
    cout << "Hello world!" << endl;
    return 0;
}
