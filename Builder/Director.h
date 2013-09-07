#ifndef DIRECTOR_H
#define DIRECTOR_H
#include "Builder.h"
//class Builder;

class Director
{
    public:
        Director(Builder* bui);
        virtual ~Director();
        void CreateObject();


    protected:

    private:
        Builder* m_pBuilder;
};

#endif // DIRECTOR_H
