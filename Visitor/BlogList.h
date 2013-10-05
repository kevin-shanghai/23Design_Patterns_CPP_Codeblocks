#ifndef BLOGLIST_H
#define BLOGLIST_H
#include <list>
#include "Element.h"


class BlogList
{
    public:
        BlogList();
        virtual ~BlogList();
        void AddBlog(Element* blog);
        void DeleteBlog(Element* blog);
        void StartVisit(Visitor* vis);

    protected:
    private:
        std::list<Element*>* m_pBlogList;
};

#endif // BLOGLIST_H
