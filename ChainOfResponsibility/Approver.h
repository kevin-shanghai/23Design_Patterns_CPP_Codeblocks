#ifndef APPROVER_H
#define APPROVER_H


class Approver
{
    public:
        Approver();
        virtual ~Approver();
        virtual void HandleRequest(int num) = 0;
        void SetApprover(Approver* app);
        Approver* GetApprover() const;

    protected:

    private:
        Approver* m_pApprover;
};

class ProjectManager:public Approver
{
    public:
        ProjectManager();
        ~ProjectManager();
        void HandleRequest(int num);

};

class Director:public Approver
{
    public:
        Director();
        ~Director();
        void HandleRequest(int num);

};

class VicePresident:public Approver
{
    public:
        VicePresident();
        ~VicePresident();
        void HandleRequest(int num);

};

#endif // APPROVER_H
