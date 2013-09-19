#ifndef FACADE_H
#define FACADE_H

class SubSystem1
{
    public:
        void Operation();

};


class SubSystem2
{
    public:
        void Operation();

};

class SubSystem3
{
    public:
        void Operation();
};


class Facade
{
    public:
        Facade();
        virtual ~Facade();
        void OperationWrapper();

    protected:

    private:
        SubSystem1* m_pSub1;
        SubSystem2* m_pSub2;
        SubSystem3* m_pSub3;
};

#endif // FACADE_H
