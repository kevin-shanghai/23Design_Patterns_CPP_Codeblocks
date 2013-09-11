//******************************************
//Author: Kevin Fu
//Email:  kevinfu1985@gmail.com
//Date:   2013/09/12
//File:   Bridge factory(main.cpp), use to seperate the abstraction and implemention.
//******************************************
#include <iostream>
#include "Color.h"
#include "Shape.h"

using namespace std;



int main()
{
    Color* red = new Red();
    Color* green = new Green();
    Color* blue = new Blue();

    Shape* circle_red = new Circle(red);
    Shape* circle_green = new Circle(green);
    Shape* circle_blue = new Circle(blue);

    Shape* rectangle_red = new Rectangle(red);
    Shape* rectangle_green = new Triangle(green);
    Shape* rectangle_blue = new Rectangle(blue);

    Shape* triangle_red = new Triangle(red);
    Shape* triangle_green = new Triangle(green);
    Shape* triangle_blue  = new Triangle(blue);


    circle_red->DrawRed();
    circle_green->DrawGreen();
    circle_blue->DrawBlue();

    rectangle_red->DrawRed();
    rectangle_blue->DrawBlue();
    rectangle_green->DrawGreen();

    triangle_red->DrawRed();
    triangle_green->DrawGreen();
    triangle_blue->DrawBlue();

    cout << "Hello world!" << endl;
    return 0;
}
