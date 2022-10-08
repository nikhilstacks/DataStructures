#include <iostream>
using namespace std;

class A
{
public:
    virtual void f1() // if we write virtual keyword in front of any function there will be late binding for that function
    {
        cout << "inside class A " << endl;
    }
};
class B : public A
{
public:
    void f1()
    {
        cout << "inside class B " << endl;
    }
};

int main()
{
    A *p, o1;
    B o2;
    p = &o2;
    p->f1(); // if function in parent class is virtual then all overridden function will also become virtual
}
