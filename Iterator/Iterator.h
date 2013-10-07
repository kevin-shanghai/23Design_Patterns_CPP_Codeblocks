#ifndef ITERATOR_H
#define ITERATOR_H
#include "Container.h"
typedef int DataType;
class Container;

class Iterator
{
    public:
        Iterator();
        virtual ~Iterator();
        virtual void begin() = 0;
        virtual bool end() = 0;
        virtual void next() = 0;
        virtual DataType GetCurrentItem() = 0;

    protected:

    private:
};


class ConcreteIterator:public Iterator
{
    public:
        ConcreteIterator(Container* con);
        ~ConcreteIterator();
        void begin();
        bool end();
        void next();
        DataType GetCurrentItem();

    private:
        Container* m_pContainer;
        int m_iIndex;
};
#endif // ITERATOR_H
