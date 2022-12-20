#include <iostream>
using namespace std;

int main()
{
    int n, row = 1, col;
    cout << "enter the value of row: ";
    cin >> n;
    char ch;
    while (row <= n)
    {
        col = 1;
        char ch = 'A' + n - row;
        while (col <= row)
        {
            cout << ch << " ";
            col++, ch++;
        }
        cout << endl;
        row++;
    }
}