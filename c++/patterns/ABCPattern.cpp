#include <iostream>
using namespace std;

int main()
{
    int row = 1, n;
    char ch = 'A';
    cout << "Enter the value for rows and cols for square matrix: ";
    cin >> n;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << ch << " ";
            col++;
        }
        cout << endl;
        ch++, row++;
    }
}
