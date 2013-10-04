#ifndef COMPUTERFACTORY_H
#define COMPUTERFACTORY_H


class ComputerFactory
{
    public:
        ComputerFactory();
        virtual ~ComputerFactory();
        void CreatePC();
        void CreateLaptop();

    protected:
    private:
};

#endif // COMPUTERFACTORY_H
