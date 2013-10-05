#ifndef ELEMENT_H
#define ELEMENT_H
#include <iostream>

class Visitor;

class Element
{
    public:
        Element();
        virtual ~Element();
        virtual void Accept(Visitor* vis) = 0;
        virtual const std::string GetBlogName() = 0;

    protected:

    private:
        std::string m_sBlogName;

};

class ElementBlog:public Element
{
    public:
        ElementBlog(std::string BlogName="");
        ~ElementBlog();
        void Accept(Visitor* vis);
        const std::string GetBlogName();

    private:
        std::string m_sBlogName;

};

#endif // ELEMENT_H
