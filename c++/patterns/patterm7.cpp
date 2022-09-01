#include <iostream>
using namespace std;
main()
{
//	int n; 
//	cout<< "Enter the number of rows: ";
//	cin>> n;
//	int row =1;
//	while(row <= n){
//		int col = 1, count = row;
//		while(col <= row){
//			cout<< count << " ";
//			count++;
//			col++;
//		}
//		cout << endl;
//		row++;
//	}
    int n; 
	cout<< "Enter the number of rows: ";
	cin>> n;
	int row =1, col = 1;;
	while(row <= n){
		col = row;
		while(col - row + 1<= row){
			cout<< col << " ";
			col++;
		}
		cout << endl;
		row++;
	}
}
