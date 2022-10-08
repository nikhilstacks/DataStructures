#include <iostream>
using namespace std;

class A
{
private:
    int a;

public:
    A()
    {
        cout << "i am inside of default constructor of class A " << endl;
    }
    A(int k)
    {
        a = k;
    }

    void showValue()
    {
        cout << "value of a is: " << a << endl;
    }
};

class B : public A
{
private:
    int b;

public:
    B(int x, int y) : A(x)
    {
        b = y;
    }
    void showData()
    {
        cout << "value of b is: " << b << endl;
    }
};

int main()
{
    B obj(2, 3);
    obj.showData();
    obj.showValue();
}