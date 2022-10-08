#include <fstream>
#include <iostream>

using namespace std;
int main()
{
    ofstream fout;
    fout.open("myData.dat");
    fout << "hello" << endl;
    fout << 5000;
    fout.close();
}