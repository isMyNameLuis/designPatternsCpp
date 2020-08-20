#include "Document.cpp"

/* Concrete derived class defined by client */

class MyDocument: public Document
{
  public:
    MyDocument(std::string fn): Document(fn){}
    void Open()
    {
        std::cout << "MyDocument: Open()" << std::endl;
    }
    void Close()
    {
        std::cout << "MyDocument: Close()" << std::endl;
    }
};