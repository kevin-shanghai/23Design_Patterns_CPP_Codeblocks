#ifndef __PRODUCT_H__
#define __PRODUCT_H__
class Product
{
    public:
        virtual ~Product()=0;
    protected:
        Product();
};

class ChildProduct1:public Product
{
    public:
        ChildProduct1();
        ~ChildProduct1();
};

class ChildProduct2:public Product
{
    public:
        ChildProduct2();
        ~ChildProduct2();
};
#endif
