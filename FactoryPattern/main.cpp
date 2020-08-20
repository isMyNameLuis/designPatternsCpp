#include "MyApplication.cpp"
int main()
{
  /* Client's customization of the Framework */
  MyApplication myApp;

  myApp.NewDocument("foo");
  myApp.NewDocument("bar");
  myApp.ReportDocs();
}
