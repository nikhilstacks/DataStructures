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

    friend Complex operator+(Complex, Complex);

    ~Complex()
    {
        counter++;
    }
};

// this is a friend function so we don't need object to call it
Complex operator+(Complex X, Complex Y) //+ operator overloaded and have different meaning for this class
{
    Complex temp;
    temp.a = X.a + Y.a;
    temp.b = X.b + Y.b;
    return temp;
}

int main()
{
    Complex c1, c2, c3;
    c1.setData(3, 4);
    c2.setData(2, 6);

    // in the below line we can also write operator+(c1, c2)
    c3 = c1 + c2; // in this line the + which is used overloaded for this class reference line 27
    c3.showData();
}
