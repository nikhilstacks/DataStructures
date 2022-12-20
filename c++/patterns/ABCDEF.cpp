#include <iostream>
using namespace std;

int main()
{
    int row = 1, n, value = 1;
    cout << "enter the value of row and cols for square matrix: ";
    cin >> n;
    char ch;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            ch = 'A' + value - 1;
            cout << ch << " ";
            col++, value++;
        }
        cout << endl;
        row++;
    }
}