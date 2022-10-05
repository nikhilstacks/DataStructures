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

    Complex operator-()
    {
        Complex temp;
        temp.a = -a;
        temp.b = -b;
        return temp;
    }

    ~Complex()
    {
        counter++;
    }
};

int main()
{
    Complex c1, c2;
    c1.setData(3, 4);
    c2 = -c1; // or we can write c1.operator-()
    c2.showData();
}
