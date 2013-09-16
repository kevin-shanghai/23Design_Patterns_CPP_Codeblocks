#ifndef COMPOSITOR_H
#define COMPOSITOR_H
#include <iostream>
#include <list>
using namespace std;


class AbstractFile
{
    public:
        AbstractFile();
        ~AbstractFile();
        virtual void AddChild(AbstractFile* rhl);
        virtual void RemoveChild(AbstractFile* rhl);
        virtual list<AbstractFile*>* GetChild();
        void PrintName() const;

    protected:
        string name;
    private:


};

class Folder:public AbstractFile    //compositor
{
    public :
        Folder(string FolderName);
        ~Folder();
        virtual void AddChild(AbstractFile* rhl);
        virtual void RemoveChild(AbstractFile* rhl);
        list<AbstractFile*>* GetChild();
        void PrintName() const;

    private:
        list<AbstractFile*> FileSystem;
};

class File:public AbstractFile      //leaf
{
    public:
        File(string FileName);
        ~File();
        void PrintName() const;

    private:

};


#endif // COMPOSITOR_H
