#include <iostream>
using namespace std;
main(){
	int x = 5;
	int *p = &x;
	cout << "with * "<< *p<<  endl;
	cout << "without * "<< p;
}
