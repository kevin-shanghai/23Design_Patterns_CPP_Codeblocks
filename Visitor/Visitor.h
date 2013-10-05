#ifndef VISITOR_H
#define VISITOR_H
class Element;

class Visitor
{
    public:
        Visitor();
        virtual ~Visitor();
        virtual void VisitBlog(Element* ele) = 0;
    protected:
    private:
};

class PCVisitor:public Visitor
{
    public:
        PCVisitor();
        ~PCVisitor();
        void VisitBlog(Element* ele);
};

class PhoneVisitor:public Visitor
{
    public:
        PhoneVisitor();
        ~PhoneVisitor();
        void VisitBlog(Element* ele);
};

#endif // VISITOR_H
