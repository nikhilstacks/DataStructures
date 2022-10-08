#include <iostream>
using namespace std;

template <class X>
X inputReturn(X a)
{
    return a;
}

int main()
{
    cout << inputReturn(4) << endl;
    cout << inputReturn("this is a string") << endl;
    cout << inputReturn('a') << endl;
    cout << inputReturn(4.6) << endl;
}