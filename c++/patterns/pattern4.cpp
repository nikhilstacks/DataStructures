#include <iostream>
using namespace std;
main()
{
	int n;
	cout << "Enter the number of rows: ";
	cin >> n;
	int i = 1;
	while(i <= n){
		int j = 1;
		while(j <= i){
			cout << "* ";
			j++;
		}
		cout<< endl;
		i++;
	}	
}
