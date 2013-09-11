#ifndef SHAPE_H
#define SHAPE_H
#include "Color.h"
class Color;

class Shape
{
    public:
        Shape();
        virtual ~Shape();
        virtual void DrawRed();
        virtual void DrawGreen();
        virtual void DrawBlue();

    protected:

    private:



};

class Circle:public Shape
{
    public:
        Circle(Color* rhl);
        ~Circle();
        void DrawRed();
        void DrawGreen();
        void DrawBlue();

    private:
        Circle operator=(const Circle&);
        Color* m_pColor;

};

class Rectangle:public Shape
{
    public:
        Rectangle(Color* rhl);
        ~Rectangle();
        void DrawRed();
        void DrawGreen();
        void DrawBlue();


    private:
         Color* m_pColor;

};

class Triangle:public Shape
{
    public:
        Triangle(Color* rhl);
        ~Triangle();
        void DrawRed();
        void DrawGreen();
        void DrawBlue();


    private:
        Color* m_pColor;
};

#endif // SHAPE_H
