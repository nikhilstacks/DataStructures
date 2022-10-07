#include <iostream>
using namespace std;

class Complex
{
private:
    int a;

public:
    friend ostream &operator<<(ostream &, Complex);
    friend istream &operator>>(istream &, Complex &);

    void showData()
    {
        cout << "this is from show data function value of a is: " << a << endl;
    }
};

ostream &operator<<(ostream &dout, Complex C)
{
    dout << "this is from overloaded operator value of a: " << C.a << endl; // we can also write cout as reference of cout is passed so both are same
    return dout;
}

istream &operator>>(istream &din, Complex &C)
{
    din >> C.a;
    return din;
}

int main()
{
    Complex c1, c2;
    cout << "Enter the value of a: ";
    operator>>(operator>>(cin, c1), c2);  // also can be written cin>>c1>>c2
    operator<<(operator<<(cout, c1), c2); // also can be writeen cout<<c1<<c2
    c1.showData();
    c2.showData();
}