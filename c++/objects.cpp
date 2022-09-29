#include <iostream>
using namespace std;
//----------------this is the first type method is inside the class----------------
//class Complex
//{
//	int a, b;
//    public:
//	void setData(int x, int y){
//		a=x;
//		b=y;
//	} 
//	void  displayData(){
//		std::cout<< "value of a is: "<< a<< " "<< "value of b is: "<<b<< std::endl;
//	}
//};


//-------------this is the second type mehtod of the class is outside------------------

class Complex
{
	int a, b;
    public:
	void setData(int, int);
	void  displayData(){
		std::cout<< "value of a is: "<< a<< " "<< "value of b is: "<<b<< std::endl;
	}
};

//---------------Complex:: This is called membership label---------------------------
void Complex::setData(int x, int y){
	a=x;
	b=y;
}

main(){
	Complex c;
	c.displayData();
	c.setData(3, 4);
	c.displayData();
}
