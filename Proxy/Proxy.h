#ifndef PROXY_H
#define PROXY_H

class Object
{
    public:
        virtual ~Object();
        virtual void Request() = 0;
    protected:
        Object();
};

class SubObject:public Object
{
    public:
        SubObject();
        ~SubObject();
        void Request();
};



class Proxy
{
    public:
        Proxy(Object* rhl);
        virtual ~Proxy();
        void Request();

    protected:

    private:
        Object* m_pObject;
};

#endif // PROXY_H
