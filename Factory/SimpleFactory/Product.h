#ifndef PRODUCT_H
#define PRODUCT_H


class Product
{
    public:
        Product();
        virtual ~Product();
    protected:
    private:
};

class ProductA:public Product
{
    public:
        ProductA();
        ~ProductA();

};

class ProductB:public Product
{
    public:
        ProductB();
        ~ProductB();
};

#endif // PRODUCT_H
