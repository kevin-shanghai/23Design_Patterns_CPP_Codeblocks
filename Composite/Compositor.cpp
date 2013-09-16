#include "Compositor.h"



//***********************************
//   AbstracFile class implementation
//***********************************
AbstractFile::AbstractFile()
{
    cout<<"AbstractFile::AbstractFile()."<<endl;
}

AbstractFile::~AbstractFile()
{
    cout<<"AbstractFile::~AbstractFile()."<<endl;
}

void AbstractFile::AddChild(AbstractFile* rhl)
{

}

void AbstractFile::RemoveChild(AbstractFile* rhl)
{

}

list<AbstractFile*>* AbstractFile::GetChild()
{

}

void AbstractFile::PrintName() const
{
    cout<<name<<endl;
}

list<AbstractFile*>* Getchild(AbstractFile* File)
{
    return NULL;
}
//***********************************
//   Folder class implementation
//***********************************

Folder::Folder(string FolderName)
{
    this->name = FolderName;
    cout<<"Folder::Folder()."<<endl;
}

Folder::~Folder()
{
    cout<<"Folder::~Folder()."<<endl;
}

void Folder::AddChild(AbstractFile* rhl)
{
    FileSystem.push_back(rhl);
}

void Folder::RemoveChild(AbstractFile* rhl)
{
    FileSystem.remove(rhl);
}

void Folder::PrintName() const
{
    cout<<this->name<<endl;
}

list<AbstractFile*>* Folder::GetChild()
{
    return &FileSystem;
}
//***********************************
//   File class implementation
//***********************************

File::File(string FileName)
{
    this->name = FileName;
    cout<<"File::File()."<<endl;
}

File::~File()
{
    cout<<"File::~File()."<<endl;
}

void File::PrintName() const
{
    cout<<this->name<<endl;
}
