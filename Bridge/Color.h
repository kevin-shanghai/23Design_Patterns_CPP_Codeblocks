#ifndef COLOR_H
#define COLOR_H
#include <iostream>
using namespace std;

class Color
{
    public:
        Color();
        virtual ~Color();
        virtual std::string GetColorName();

    protected:

    private:
        string m_sColorName;
};

class Red:public Color
{
    public:
        Red();
        ~Red();
        string GetColorName();
    protected:

    private:
        string m_sColorName;
};

class Green:public Color
{
    public:
        Green();
        ~Green();
        string GetColorName();
    private:
        string m_sColorName;
};

class Blue:public Color
{
    public:
        Blue();
        ~Blue();
        string GetColorName();

    private:
        string m_sColorName;
};

#endif // COLOR_H
