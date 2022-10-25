#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    Complex() {}
    Complex(int i)
    {
        a = i, b = 0;
    }
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    void showData()
    {
        cout << "value of a is: " << a << " value of b is: " << b << endl;
    }
};
main()
{
    Complex c1;
    int k = 5;
    c1 = 5;
    c1.showData();
}