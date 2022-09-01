#include <iostream>
using namespace std;
main()
{
	cout<< "Enter the number of rows: ";
	int n;
	cin >> n;
	int i = 1, j = 1;
	while(i <= n){
		int everyLine = 1;
		while(everyLine <= n){
			cout<< j;
			everyLine++;
			j++;
		}
		cout << endl;
		i++;
	}	
}
