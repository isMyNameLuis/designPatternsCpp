#include "Application.cpp"

class MyApplication: public Application
{
  public:
    MyApplication()
    {
        std::cout << "MyApplication: ctor" << std::endl;
    }
    /* Client defines Framework's "hole" */
    Document *CreateDocument(std::string fn)
    {
        std::cout << "   MyApplication: CreateDocument()" << std::endl;
        return new MyDocument(fn);
    }
};