#include <iostream>
#include "Visitor.h"
#include "BlogList.h"
#include "Element.h"

using namespace std;

int main()
{
    Visitor* PCvis = new PCVisitor();
    Visitor* Phonevis = new PhoneVisitor();

    Element* blog1 = new ElementBlog("First Blog");
    Element* blog2 = new ElementBlog("Second Blog");

    BlogList* bloglist = new BlogList();

    bloglist->AddBlog(blog1);
    bloglist->AddBlog(blog2);
    bloglist->StartVisit(PCvis);
    bloglist->StartVisit(Phonevis);

    return 0;
}
