#include <iostream>
using namespace std;
main()
{
	cout << "Enter the number of rows: " << endl;
	int n, i = 1;
	cin >> n ;
		while(i <= n){
			int j = 1;
			while(j <= n){
				cout<< j;
				j++;
			}
			cout<< endl;
			i++;
		}
}
