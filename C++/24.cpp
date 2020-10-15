#include <iostream>
using namespace std;

int main()
{
	int n,count=0;
	cout<<"Enter Number: ";
	cin>>n;

	if(n==0)
	{
		cout<<"There is only 1 digits";
	}
	else
	{
		while(n!=0)
		{
		n=n/10;
		count++;
		}
		cout<<"There are "<<count<<" no. of digits";
	}
	return 0;
}