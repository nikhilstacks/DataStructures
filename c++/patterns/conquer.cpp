#include <iostream>
using namespace std;

int main()
{
    int row = 1, n, secValue = 1;
    cout << "enter the number of rows: ";
    cin >> n;
    int first = n, secCounter = 0, third = n;
    while (row <= n)
    {

        // print first triangle
        int i = 1;
        while (i <= first)
        {
            cout << i << " ";
            i++;
        }

        // print second triangle
        int second, counter = 1;
        second = (secValue - 1) * 2;
        while (counter <= second)
        {
            cout << "*"
                 << " ";
            counter++;
        }

        // print third triangle
        int k = third, l = 1;
        while (l <= third)
        {
            cout << k << " ";
            k--, l++;
        }

        cout << endl;
        first--, row++, secValue++, third--;
    }
}