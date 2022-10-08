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
        cout << "value of this " << this;
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
    cout << "value of p " << p << endl;
    smallBox.setData(10, 12, 5);
    smallBox.showData();
}