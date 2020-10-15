#include<iostream>

struct complex
{
	double a;
	double b;
	
	complex add(complex& x)
	{
		complex temp;
		temp.a = this->a + x.a;
		temp.b = this->b + x.b;
		return temp;
	}
	
	void toString()
	{
		std::cout<< this->a << "+ i"<<this->b;
	}
};

int main()
{
	complex x;
	x.a = 10;
	x.b = 20;
	
	complex y;
	y.a = 50;
	y.b = 60;
	
	complex z = x.add(y);
	z.toString();
	
}


