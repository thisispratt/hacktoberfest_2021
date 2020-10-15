#include <iostream>
using namespace std;

int main()
{
	int n,r,y=0,x;
	cout<<"Enter Number: ";
	cin>>n;

	x=n;		// x is temp variable
	while(x!=0)
	{
		r=x%10;
		y=y*10+r;
		x=x/10;
	}
	
	if(y==n)
	{
		cout<<n<<" is a Palindrome No.";
	}
	else
	{
		cout<<n<<" Not a Palindrome No.";
	}
	return 0;
}