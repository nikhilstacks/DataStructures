#include <iostream>
using namespace std;

class Box
{
private:
    int l, b, h;

public:
    void setData(int x, int y, int z)
    {
        l = x, b = y, h = z;
    }
    void showData()
    {
        cout << "\n l=" << l << " b=" << b << " h=" << h;
    }
};

int main()
{
    Box *p, smallBox;
    p = &smallBox;
    p->setData(10, 12, 5);
    p->showData();
}