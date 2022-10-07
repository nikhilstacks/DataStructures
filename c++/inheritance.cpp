#include <iostream>
using namespace std;

class A
{
private:
    int a;

protected:
    void setValue(int x)
    {
        a = x;
    }

public:
    void showValue()
    {
        cout << "value of a: " << a;
    }
};

class B : public A
{
public:
    void setData()
    {
        setValue(8);
    }
};

int main()
{
    B obj;
    obj.setData();
    obj.showValue();
}