#include "BlogList.h"
using namespace std;

BlogList::BlogList():m_pBlogList(new list<Element*>())
{
    //ctor
}

BlogList::~BlogList()
{
    //dtor
}

void BlogList::AddBlog(Element* ele)
{
    m_pBlogList->push_back(ele);
}

void BlogList::DeleteBlog(Element* ele)
{
    m_pBlogList->remove(ele);
}

void BlogList::StartVisit(Visitor* vis)
{
    list<Element*>::iterator iter = m_pBlogList->begin();
    for(;iter!=m_pBlogList->end();iter++)
        (*iter)->Accept(vis);
    //for_each(m_pBlogList->begin();m_pBlogList->end();Start(vis));
}
