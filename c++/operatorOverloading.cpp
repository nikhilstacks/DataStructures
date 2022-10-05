#include <iostream>
using namespace std;

int counter = 0;

class Complex
{
private:
    int a, b;

public:
    Complex()
    {
    }

    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    void showData()
    {
        cout << "value of a: " << a << " value of b: " << b << endl;
    }

    Complex operator+(Complex c) //+ operator overloaded and have different meaning for this class
    {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }

    ~Complex()
    {
        counter++;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.setData(3, 4);
    c2.setData(2, 6);
    c3 = c1 + (c2); // in this line the + which is used overloaded for this class reference line 27
    c3.showData();
}
