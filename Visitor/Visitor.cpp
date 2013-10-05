#include "Visitor.h"
#include "Element.h"
#include <iostream>
using namespace std;


Visitor::Visitor()
{
    //ctor
}

Visitor::~Visitor()
{
    //dtor
}

PCVisitor::PCVisitor()
{

}

PCVisitor::~PCVisitor()
{

}

void PCVisitor::VisitBlog(Element* ele)
{
    cout<<"Visit "<<ele->GetBlogName()<< " through PC."<<endl;
}

PhoneVisitor::PhoneVisitor()
{

}

PhoneVisitor::~PhoneVisitor()
{

}

void PhoneVisitor::VisitBlog(Element* ele)
{
    cout<<"Visit "<<ele->GetBlogName()<<" through Phone."<<endl;
}


