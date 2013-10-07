#ifndef CONTAINER_H
#define CONTAINER_H
#include "Iterator.h"
class Iterator;
typedef int DataType;

class Container
{
    public:
        Container();
        virtual ~Container();
        virtual int GetSize() const = 0;
        virtual DataType GetItem(int index) const = 0;
        virtual Iterator* CreateIterator(Container* con) = 0;

    protected:

    private:

};

class ConcreteContainer:public Container
{
    public:
        ConcreteContainer(int size);
        ~ConcreteContainer();
        int GetSize() const;
        DataType GetItem(int index) const;
        Iterator* CreateIterator(Container* con);

    private:
        DataType* m_pDataType;
        int m_iSize;

};

#endif // CONTAINER_H
