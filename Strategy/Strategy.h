#ifndef STRATEGY_H
#define STRATEGY_H


class Strategy
{
    public:
        Strategy();
        virtual ~Strategy();
        virtual void operation();
    protected:
    private:
};


class StrategyA:public Strategy
{
    public:
        void operation();
};

class StrategyB:public Strategy
{
    public:
        void operation();
};
#endif // STRATEGY_H
