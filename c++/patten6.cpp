#include <iostream>
using namespace std;
main()
{
	int n;
	cout<< "Enter the number of row: ";
	cin>> n;
	int row = 1, count = 1;
	while(row <= n){
		int col = 1;
		while(col <= row){
			cout<< count << " ";
			count++;
			col++;
		}
		cout<< endl;
		row++;
	}	
}
