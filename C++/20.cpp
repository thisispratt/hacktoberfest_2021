// 20. Program to Display Fibonacci Sequence
#include <iostream>
using namespace std;

#define LL long long

int main() 
{
   	LL len,a,b;
	cout<<"Enter length of the Fibonacci Sequence: "<<endl;
	cin>>len;
	a=0;
	b=1;
	
	for(LL i=0; i<len; i++)
	{
	    LL c = a+b;
	    cout<<a<<"\n"<<b<<"\n"<<c<<endl;
	    a=b;
	    b=c;
	}
	return 0;
}
