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

class Adapter
{
    public:
        Adapter(Adaptee* a):m_pAdaptee(a)
            {
                cout<<"Adapter(Adaptee* a)"<<endl;
            }
        void Request()
            {
                if(m_pAdaptee)
                    m_pAdaptee->SpecificRequest();
            }
    private:
        Adapter();
        Adaptee* m_pAdaptee;

};

int main()
{
    Adaptee* adaptee = new Adaptee;
    Adapter adapter(adaptee);
    adapter.Request();
    cout << "Hello world!" << endl;
    return 0;
}
