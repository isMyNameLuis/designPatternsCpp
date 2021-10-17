#include <iostream>
#include <thread>

#include "Singleton.h"

using namespace std;

void Thread1()
{
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    Singleton* singleton = Singleton::GetInstance("Thread1 SINGLETON");
    cout << "Singleton Value on Thread1 is : " << singleton->sValue << "\n";
}
void Thread2()
{
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    Singleton* singleton = Singleton::GetInstance("Thread2 SINGLETON");
    cout << "Singleton Value on Thread2 is : " << singleton->sValue << "\n";
}

int main() 
{
    cout << "Initializing Singleton example...\n";

    //Singleton* singleton1 = Singleton::GetInstance("INSTANCE1");
    //Singleton* singleton2 = Singleton::GetInstance("INSTANCE2");
//
    //cout << "Singleton1 Value is: " << singleton1->sValue << "\n";
    //cout << "Singleton2 Value is: " << singleton2->sValue << "\n";
 
    thread t1(Thread1);
    thread t2(Thread2);

    t1.join();
    t2.join();

}

