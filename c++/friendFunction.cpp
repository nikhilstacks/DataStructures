#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    void showData()
    {
        cout << "value of a is: " << a << "\nvalue of b is: " << b;
    }

    friend void fun(Complex);
};

void fun(Complex c)
{
    cout << endl
         << "value of sum of botht the numbers are: " << c.a + c.b;
}

int main()
{
    Complex c1;
    c1.setData(7, 6);
    c1.showData();
    fun(c1);
}