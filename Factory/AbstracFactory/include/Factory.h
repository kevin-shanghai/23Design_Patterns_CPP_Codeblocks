#ifndef FACTORY_H
#define FACTORY_H
class ProductA;
class ProductB;

class Factory
{
    public:
        Factory();
        virtual ~Factory();
        virtual ProductA* CreateProductA()=0;
        virtual ProductB* CreateProductB()=0;

    protected:
    private:
};

class FactoryA:public Factory
{
    public:
        FactoryA();
        ~FactoryA();
        virtual ProductA* CreateProductA();
        virtual ProductB* CreateProductB();
};

class FactoryB:public Factory
{
    public:
        FactoryB();
        ~FactoryB();
        virtual ProductA* CreateProductA();
        virtual ProductB* CreateProductB();

};
#endif // FACTORY_H
