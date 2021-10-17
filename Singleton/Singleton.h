#ifndef SINGLETON_H
#define SINGLETON_H

#include <string>

using namespace std;

class Singleton
{

public:

    static Singleton* GetInstance(const string& initValue);
    
    Singleton(Singleton &other) = delete; //cannot clone singleton
    
    void operator=(const Singleton &) = delete; //cannot assign singleton 

    string sValue;

private:

    Singleton(const string initValue) : sValue(initValue) 
    {

    };

    static Singleton* classInstance;

};

#endif /*SINGLETON_H*/
