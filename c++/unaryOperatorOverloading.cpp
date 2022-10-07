#include <iostream>
using namespace std;

class Negation
{
private:
    int a;

public:
    void setData(int x)
    {
        a = x;
    }

    void showData()
    {
        cout << "value of a is: " << a << endl;
    }

    friend Negation operator-(Negation);
};

Negation operator-(Negation X)
{
    Negation temp;
    temp.a = -X.a;
    return temp;
}

int main()
{
    Negation c1, c2;
    c1.setData(7);
    c1.showData();

    // in the below line there is friend function is called
    // we can also write c2= operator-(c1)
    c2 = -c1;
    c2.showData();
}