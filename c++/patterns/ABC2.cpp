#include <iostream>
using namespace std;

int main()
{
    int row = 1, n;
    cout << "enter the value of row and cols for square matrix: ";
    cin >> n;
    char ch;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            ch = 'A' + col - 1;
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}