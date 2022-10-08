#include <fstream>
#include <iostream>

using namespace std;
int main()
{
    ofstream fout; // ofstream will create a output stream from program to file
    // if file is not created open function will create a new file
    fout.open("myData.dat"); // if file is created previously it will overwrite the changes
    fout << "hello" << endl;
    fout << 5000;
    fout.close();
}