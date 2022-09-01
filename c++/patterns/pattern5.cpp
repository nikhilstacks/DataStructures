#include <iostream>
using namespace std;
main()
{
	int row;
	cout<< "Enter the number of rows: ";
	cin >> row;
	int count = 1;
	
	while (count <= row){
		int col = 1;
		while(col <= count){
			cout<< count << " ";
			col++;
		}
		
		cout<< endl;
		count++;
	}	
}
