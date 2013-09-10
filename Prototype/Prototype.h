#ifndef PROTOTYPE_H
#define PROTOTYPE_H


class Prototype
{
    public:
        Prototype();
        virtual ~Prototype();
        virtual Prototype* clone() const = 0;

    protected:

    private:
};

class Prototype1:public Prototype
{
    public:
        Prototype1();
        ~Prototype1();
        Prototype1(const Prototype1& pro);
        virtual Prototype* clone() const;

};

class Prototype2:public Prototype
{
    public:
        Prototype2();
        ~Prototype2();
        Prototype2(const Prototype2& pro);
        virtual Prototype* clone() const;

};
#endif // PROTOTYPE_H
