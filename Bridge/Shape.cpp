#include "Shape.h"
#include <iostream>
using namespace std;


Shape::Shape()
{
    cout<<"Shape::Shape()."<<endl;
}

Shape::~Shape()
{
    cout<<"Shape::~Shape()."<<endl;
}

void Shape::DrawBlue()
{

}

void Shape::DrawGreen()
{

}

void Shape::DrawRed()
{

}
Circle::Circle(Color* rhl):m_pColor(rhl)
{
    cout<<"Circle::Circle()."<<endl;
}

Circle::~Circle()
{
    cout<<"Circle::~Circle()."<<endl;
}

void Circle::DrawRed()
{
    cout<<m_pColor->GetColorName()<<"Circle"<<endl;
}

void Circle::DrawGreen()
{
    cout<<m_pColor->GetColorName()<<"Circle"<<endl;
}

void Circle::DrawBlue()
{
    cout<<m_pColor->GetColorName()<<"Circle"<<endl;
}


Rectangle::Rectangle(Color* rhl):m_pColor(rhl)
{
    cout<<"Rectangle::Rectangle()."<<endl;
}

Rectangle::~Rectangle()
{
    cout<<"Rectangle::~Rectangle()."<<endl;
}

void Rectangle::DrawRed()
{
    cout<<m_pColor->GetColorName()<<"Rectangle"<<endl;
}

void Rectangle::DrawGreen()
{
    cout<<m_pColor->GetColorName()<<"Rectangle"<<endl;
}

void Rectangle::DrawBlue()
{
    cout<<m_pColor->GetColorName()<<"Rectangle"<<endl;
}


Triangle::Triangle(Color* rhl):m_pColor(rhl)
{
    cout<<"Triangle::Triangle()."<<endl;
}

Triangle::~Triangle()
{
    cout<<"Triangle::~Triangle()."<<endl;
}

void Triangle::DrawRed()
{
    cout<<m_pColor->GetColorName()<<"Rectangle"<<endl;
}

void Triangle::DrawGreen()
{
    cout<<m_pColor->GetColorName()<<"Rectangle"<<endl;
}

void Triangle::DrawBlue()
{
    cout<<m_pColor->GetColorName()<<"Rectangle"<<endl;
}
