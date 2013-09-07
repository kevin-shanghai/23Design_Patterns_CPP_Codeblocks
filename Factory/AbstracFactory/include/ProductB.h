#ifndef PRODUCTB_H
#define PRODUCTB_H


class ProductB
{
    public:
        ProductB();
        virtual ~ProductB();
    protected:
    private:
};

class ProductB1:public ProductB
{
    public:
        ProductB1();
        ~ProductB1();
};

class ProductB2:public ProductB
{
    public:
        ProductB2();
        virtual ~ProductB2();
};
#endif // PRODUCTB_H
