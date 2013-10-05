#include "Element.h"
using namespace std;
#include "Visitor.h"

Element::Element():m_sBlogName("")
{
    //ctor
}

Element::~Element()
{
    //dtor
}

void Element::Accept(Visitor* vis)
{

}

const string Element::GetBlogName()
{
    return m_sBlogName;
}

ElementBlog::ElementBlog(std::string BlogName):m_sBlogName(BlogName)
{

}

ElementBlog::~ElementBlog()
{

}

const string ElementBlog::GetBlogName()
{
    return m_sBlogName;
}

void ElementBlog::Accept(Visitor* vis)
{
    vis->VisitBlog(this);
}
