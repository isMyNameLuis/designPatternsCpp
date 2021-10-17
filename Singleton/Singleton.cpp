#include "Singleton.h"

using namespace std;

Singleton* Singleton::classInstance = nullptr; 

Singleton* Singleton::GetInstance(const string& initValue)
{
    if(classInstance == nullptr)
    {
        classInstance = new Singleton(initValue);
    }
    return classInstance;
}



