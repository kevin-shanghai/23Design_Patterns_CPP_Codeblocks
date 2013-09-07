#ifndef BUILDER_H
#define BUILDER_H


class Builder
{
    public:
        Builder();
        virtual ~Builder();
        virtual void BuildCPU() const = 0;
        virtual void BuildMemory() const = 0;
        virtual void BuildDisk() const = 0;
        virtual void BuildKey() const = 0;
        virtual void BuildMouse() const = 0;

    protected:
    private:
};

class PcBuilder:public Builder
{
    public:
        PcBuilder();
        ~PcBuilder();

        void BuildCPU() const;
        void BuildMemory() const;
        void BuildDisk() const;
        void BuildKey() const;
        void BuildMouse() const;

    protected:

    private:
};


class LaptopBuilder:public Builder
{
    public:
        LaptopBuilder();
        ~LaptopBuilder();

        void BuildCPU() const;
        void BuildMemory() const;
        void BuildDisk() const;
        void BuildKey() const;
        void BuildMouse() const;

    protected:

    private:
};
#endif // BUILDER_H
