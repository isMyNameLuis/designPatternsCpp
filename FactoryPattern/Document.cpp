#include <iostream>
#include <string>
/* Abstract base class declared by framework */
class Document
{
  public:
    Document(std::string fn)
    {
        name = fn;
    }
    virtual void Open() = 0;
    virtual void Close() = 0;
    std::string GetName()
    {
        return name;
    }
  private:
    std::string name;
};