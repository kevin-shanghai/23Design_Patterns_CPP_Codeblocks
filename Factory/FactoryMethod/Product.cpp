#include <iostream>
#include "Product.h"
using namespace std;
Product::Product()
{
    cout<<"Product::Product();"<<endl;
}

Product::~Product()
{
    cout<<"Product::~Product();"<<endl;
}

ChildProduct1::ChildProduct1()
{
    cout<<"ChildProduct1::ChildProduct1();"<<endl;
}

ChildProduct1::~ChildProduct1()
{
    cout<<"ChildProduct1::~ChildProduct1();"<<endl;
}

ChildProduct2::ChildProduct2()
{
    cout<<"ChildProduct2::ChildProduct2();"<<endl;
}

ChildProduct2::~ChildProduct2()
{
    cout<<"ChildProduct2::~ChildProduct2();"<<endl;
}
