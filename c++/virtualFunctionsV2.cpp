#include <iostream>
using namespace std;
class A
{
public:
    void f1() { cout << "f1 A" << endl; }
    virtual void f2() { cout << "f1 A" << endl; }
    virtual void f3() { cout << "f1 A" << endl; }
    virtual void f4() { cout << "f1 A" << endl; }
};
class B : public A
{
public:
    void f1() { cout << "f1 B" << endl; }
    void f2() { cout << "f1 B" << endl; }
    void f4(int x) { cout << "f1 B" << endl; }
};
int main()
{
    A *p;
    B o2;
    p = &o2;
    p->f1();
    p->f2();
    p->f3();
    p->f4();
}
