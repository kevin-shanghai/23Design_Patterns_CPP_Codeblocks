#include <iostream>

using namespace std;

class Memento
{
    public:
        //Memento(){m_pState = "";}
        Memento(string sta){m_pState = sta;}
        ~Memento(){}
        void SetState(string sta){m_pState = sta;}
        string GetState(){return m_pState;}

    private:
        string m_pState;

};

class Origion
{
    public:
        Origion(){m_pState = "";}
        ~Origion(){}
        Memento* CreateMemento(){return new Memento(m_pState);}
        void RecoverFromMemento(Memento* mem){this->m_pState = mem->GetState();}
        void SetState(string sta){this->m_pState = sta;}
        string GetState(){return m_pState;}

    private:
        string m_pState;
};

class RestoreMemento
{
    public:
        RestoreMemento(){m_pMemento = NULL;}
        void SaveMemento(Memento* mem){m_pMemento = mem;}
        Memento* GetMemento(){return m_pMemento;}

    private:
        Memento* m_pMemento;
};


int main()
{
    Origion* ori = new Origion();
    ori->SetState("State 1");
    cout<<"First state: "<<ori->GetState()<<endl;

    cout<<"*********Save the First state**********"<<endl;
    RestoreMemento* res = new RestoreMemento();
    res->SaveMemento(ori->CreateMemento());

    ori->SetState("State 2");
    cout<<"Second state: "<<ori->GetState()<<endl;

    cout<<"**********Recover the first state******** "<<endl;
    cout<<"After Recover the state: "<<res->GetMemento()->GetState()<<endl;
    return 0;
}
