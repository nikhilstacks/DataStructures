#include <iostream>
using namespace std;
main(){
	int x = 5;
	int *p;
	p=&x;
    cout<< "address of x "<< p<< endl;
    p= p + 'c';
    cout<< "new value " << p<< endl;
    
    int &y = x;
    cout<< "show the value of y and i am thinking it is {5} "<< y<<endl;
    y++;
    cout << "value of x will be incremented "<< y;
}
