#include <iostream>
#include "Compositor.h"

using namespace std;

int main()
{
    AbstractFile *rootFolder=new Folder("root dir");
    AbstractFile *Folder1=new Folder("dir1");
    AbstractFile *Folder2=new Folder("dir2");

    AbstractFile *file1=new File("file1");
    AbstractFile *file2=new File("file2");
    rootFolder->AddChild(Folder1);
    rootFolder->AddChild(Folder2);
    rootFolder->AddChild(file1);
    Folder1->AddChild(file2);
    rootFolder->PrintName();
    Folder1->PrintName();
    Folder2->PrintName();
    file1->PrintName();
    file2->PrintName();

    cout << "Hello world!" << endl;
    return 0;
}
