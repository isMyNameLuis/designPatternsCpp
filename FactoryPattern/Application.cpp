#include "MyDocument.cpp"
/* Framework declaration */
class Application
{
  public:
    Application(): _index(0)
    {
        std::cout << "Application: ctor" << std::endl;
    }
    /* The client will call this "entry point" of the framework */
    void NewDocument(std::string name)
    {
        std::cout << "Application: NewDocument()" << std::endl;
        /* Framework calls the "hole" reserved for client customization */
        _docs[_index] = CreateDocument(name);
        _docs[_index++]->Open();
    }
    void OpenDocument(){}
    void ReportDocs();
    /* Framework declares a "hole" for the client to customize */
    virtual Document *CreateDocument(std::string) = 0;
  private:
    int _index;
    /* Framework uses Document's base class */
    Document *_docs[10];
};

void Application::ReportDocs()
{
  std::cout << "Application: ReportDocs()" << std::endl;
  for (int i = 0; i < _index; i++)
    std::cout << "   " << _docs[i]->GetName() << std::endl;
}