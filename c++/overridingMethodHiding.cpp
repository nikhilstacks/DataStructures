#include <iostream>
using namespace std;

class Car
{
public:
    void gearShift() // method overriding
    {
        cout << "you just shifted gear :-)" << endl;
    }
    void fun() // method hiding
    {
        cout << "inside fun function class Car :-)" << endl;
    }
};

class SportsCar : public Car
{
public:
    void gearShift() // method overriding
    {
        cout << "you just shifted sports car gear :-)" << endl;
    }
    void fun(int x) // method hiding
    {
        cout << "fun function from sports car class :-)" << endl;
    }
};
int main()
{
    SportsCar obj;
    obj.gearShift();
    obj.fun(4);
}
