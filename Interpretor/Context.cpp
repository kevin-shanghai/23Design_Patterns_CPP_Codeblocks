#include "Context.h"

Context::Context(string input):m_sInput(input), m_sOutput("")
{

}

Context::~Context()
{

}

void Context::SetInput(const string input)
{
    m_sInput = input;
}

string Context::GetInput() const
{
    return m_sInput;
}

void Context::SetOutput(const string output)
{
    m_sOutput = output;
}

string Context::GetOutput() const
{
    return m_sOutput;
}
