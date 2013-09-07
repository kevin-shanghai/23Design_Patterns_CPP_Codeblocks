#ifndef PRODUCTA_H
#define PRODUCTA_H


class ProductA
{
    public:
        ProductA();
        virtual ~ProductA();
    protected:
    private:
};


class ProductA1:public ProductA
{
    public:
        ProductA1();
        ~ProductA1();
};

class ProductA2:public ProductA
{
    public:
        ProductA2();
        virtual ~ProductA2();
};


#endif // PRODUCTA_H
