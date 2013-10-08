#ifndef CONTEXT_H
#define CONTEXT_H
#include <iostream>
using namespace std;

class Context
{
    public:
        Context(string input);
        virtual ~Context();
        void SetInput(const string input);
        string GetInput() const;
        void SetOutput(const string output);
        string GetOutput() const;

    protected:

    private:
        string m_sInput;
        string m_sOutput;

};

#endif // CONTEXT_H
