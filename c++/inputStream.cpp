#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    ifstream fin; // ifstream will create a stream from file to program to get input value from file
    fin.open("myData.dat");
    char ch;
    ch = fin.get();
    while (!fin.eof())
    {
        cout << ch;
        ch = fin.get(); // we use get function because extraction operator will see space as separators
    }
    fin.close();
}