#include <iostream>;
using namespace std;

int counter = 0;

class Complex{
	private:
		int a,b;
	public:
		void setData(int x, int y)
		{
			a=x; b=y;	
		}
		
		Complex(Complex c){
			
		}
		
		void showData(){
			cout<< "value of a: "<< a<< " value of b: "<<b<<endl;
		}
		
		Complex add(Complex c){
			Complex temp;
			temp.a = a + c.a;
			temp.b = b + c.b;
			return temp;
		}
		
		~Complex(){
			counter++;
		}
};

int main()
{
	Complex c1, c2, c3;
	c1.setData(3,4);
	c2.setData(2,6);
	c3 = c1.add(c2);
	c3.showData();	
	Counter c4=c3;
}
