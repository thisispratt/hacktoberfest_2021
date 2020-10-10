// 20. Program to Display Fibonacci Sequence
#include <iostream>
using namespace std;

#define ll long long

int main() 
{
    ll len;
	cout<<"Enter length of the Fibonacci Sequence: "<<endl;
	cin>>len;
	ll a=0,b=1;
	
	for(ll i=0; i<len; i++)
	{
	    ll c = a+b;
	    cout<<a<<" "<<b<<" "<<c<<endl;
	    a=b;
	    b=c;
	}
	return 0;
}
