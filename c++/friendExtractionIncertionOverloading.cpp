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
        cout << a << endl;
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
    cout << "this is the value of c1's a: ";
    c1.showData();
    cout << "This is the value of c2's a: ";
    c2.showData();
}