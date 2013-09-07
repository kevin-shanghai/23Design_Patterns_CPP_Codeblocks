#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton
{
    public:
        virtual ~Singleton();
        static Singleton* GetInstance();

    protected:
        Singleton();

    private:
        static Singleton* m_Instance;
};


#endif // SINGLETON_H
