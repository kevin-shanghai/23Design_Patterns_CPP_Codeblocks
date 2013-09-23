#ifndef TEMPLATE_H
#define TEMPLATE_H


class Template
{
    public:
        Template();
        virtual ~Template();
        void TemplateMethod_Live();
        virtual void Eat() = 0;
        virtual void Sleep() = 0;

    protected:
    private:
};

class Cat:public Template
{
    public:
        void Eat();
        void Sleep();
};

class Dog:public Template
{
    public:
        void Eat();
        void Sleep();
};

#endif // TEMPLATE_H
