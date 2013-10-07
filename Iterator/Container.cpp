#include "Container.h"

Container::Container()
{
    //ctor
}

Container::~Container()
{
    //dtor
}

Iterator* Container::CreateIterator(Container* con)
{

}


ConcreteContainer::ConcreteContainer(int size):m_iSize(size), m_pDataType(new DataType[m_iSize])
{
    for(int i=0;i<m_iSize;i++)
        m_pDataType[i] = i*i;
}

ConcreteContainer::~ConcreteContainer()
{

}

int ConcreteContainer::GetSize() const
{
   return m_iSize;
}

DataType ConcreteContainer::GetItem(int index) const
{
    return m_pDataType[index];
}

Iterator* ConcreteContainer::CreateIterator(Container* con)
{
    return new ConcreteIterator(con);
}
