#include <iostream> 
using namespace std;  
int GCD(int a, int b) 
{ 
	// Everything divides 0 
	if (a == 0) 
	return b; 
	if (b == 0) 
	return a; 

	// both are equal
	if (a == b) 
		return a; 

	// a is greater 
	if (a > b) 
		return GCD(a-b, b); 
	//b is greater
	return GCD(a, b-a); 
} 


int main() 
{ 
	int x, y;
	cout<<"Enter the two numbers "<<endl;
	cin>>x>>y;
	cout<<"GCD of "<<x<<" and "<<y<<" is "<<GCD(x, y); 
	return 0; 
} 
