#include <iostream>
using namespace std;
main()
{
	int n;
	cout<< "Enter the number of row: ";
	cin>> n;
	int row = 1, col = 1;;
	while(row <= n){
		while(col <= row){
			cout<< col;
			col++;
		}
		cout<< endl;
		row++;
	}	
}
