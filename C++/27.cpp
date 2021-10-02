#include <iostream>
using namespace std;

int main()
{
	int n,y=0,x,r;
	cout<<"Enter a No. ";
	cin>>n;
	x=n;   			//x is a temp variable and y is a result

	while(x!=0)
	{
		r=x%10;
		
		y=y*10+r;
		x=x/10;
	}

	if(y==n)
		cout<<n<<" Is a palindrome No.";
	else
		cout<<n<<" Not a palindrome No.";
	
	return 0;
}
