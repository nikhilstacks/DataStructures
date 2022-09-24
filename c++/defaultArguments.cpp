#include <iostream>
using namespace std;
int add(int, int, int=0);
main(){
	int a, b, s;
	cout<< "enter two numbers: "<< endl;
	cin>> a >> b;
	s= add(a, b);
	cout<< "sum of two numbers is: "<< s << endl;
	int c;
	cin>> a >> b >>c;
	s= add(a,b,c);
	cout << "sum of the three numbers are: "<<s;
}

int add(int x, int y, int z){
	return x+y+z;
}
