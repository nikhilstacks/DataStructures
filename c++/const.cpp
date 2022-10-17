#include <iostream>
using namespace std;
class CONST
{
private:
    int a = 4;
    const int x;
    int &y;

public:
    CONST(int &n) : x(5), y(n) // initializers list
    {
    }
    void getData()
    {
        cout << "value of a,x,y is: " << a << " " << x << " " << y;
        y++;
        // x++; // if we try to change value of a contant variable we will get an error
    }
};

int main()
{
    int m = 13;
    CONST a(m);
    a.getData();
    cout << endl
         << "value of m after incremeting in class reference varibale: " << m;
}
