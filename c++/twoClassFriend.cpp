#include <iostream>
using namespace std;

class B;
class A
{
private:
    int a;

public:
    void setData(int x)
    {
        a = x;
    }

    friend void fun(A, B);
};

class B
{
private:
    int b;

public:
    void setData(int y)
    {
        b = y;
    }

    friend void fun(A, B);
};

// friend function is used to access values of two classes private data members
// friend fumction is not a class data member
// no need of object to call friend function
void fun(A c, B C)
{
    cout << endl
         << "value of sum of both the numbers are: " << c.a + C.b;
}

int main()
{
    A c1;
    c1.setData(6);
    B c2;
    c2.setData(7);
    fun(c1, c2);
}