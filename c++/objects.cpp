#include <iostream>
//using namespace std;
class Complex
{
	int a, b;
    public:
	void setData(int x, int y){
		a=x;
		b=y;
	} 
	void  displayData(){
		std::cout<< "value of a is: "<< a<< " "<< "value of b is: "<<b<< std::endl;
	}
};

main(){
	Complex c;
	c.displayData();
	c.setData(3, 4);
	c.displayData();
}
