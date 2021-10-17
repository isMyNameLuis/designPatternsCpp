#include <iostream>

#include "Singleton.h"

using namespace std;

int main(int, char**) 
{
    cout << "Initializing Singleton example...\n";

    Singleton* singleton1 = Singleton::GetInstance("INSTANCE1");
    Singleton* singleton2 = Singleton::GetInstance("INSTANCE2");

    cout << "Singleton1 Value is: " << singleton1->sValue << "\n";
    cout << "Singleton2 Value is: " << singleton2->sValue << "\n";


}
