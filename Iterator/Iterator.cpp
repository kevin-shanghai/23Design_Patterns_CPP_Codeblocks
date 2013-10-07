#include "Iterator.h"

Iterator::Iterator()
{
    //ctor
}

Iterator::~Iterator()
{
    //dtor
}

ConcreteIterator::ConcreteIterator(Container* con):m_pContainer(con), m_iIndex(0)
{

}

ConcreteIterator::~ConcreteIterator()
{

}

void ConcreteIterator::begin()
{
    m_iIndex = 0;
}

bool ConcreteIterator::end()
{
    return m_iIndex == m_pContainer->GetSize();
}

void ConcreteIterator::next()
{
    if(m_iIndex < m_pContainer->GetSize())
        m_iIndex++;
}

DataType ConcreteIterator::GetCurrentItem()
{
    return m_pContainer->GetItem(m_iIndex);
}
