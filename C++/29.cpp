#include <iostream>
using namespace std;

int main()
{
	int n,r,s=0,x;
	cout<<"Enter Number: ";
	cin>>n;

	x=n;		// x is temp variable
	while(x!=0)
	{
		r=x%10;
		s=s+(r*r*r);
		x=x/10;
	}
	
	if(s==n)
	{
		cout<<n<<" is a Armstrong No.";
	}
	else
	{
		cout<<n<<" Not a Armstrong No.";
	}
	return 0;
}