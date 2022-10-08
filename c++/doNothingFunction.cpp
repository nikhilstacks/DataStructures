#include <iostream>
using namespace std;

class A
{
public:
    virtual void fun() = 0; // pure virtual function
};
int main()
{
    //  A obj; // we can't create object of abstract class
}
