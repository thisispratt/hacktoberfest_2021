#include <iostream>
using namespace std;

int main()
{
	int n, count=0;
	cout<<"Enter a No. ";
	cin>>n;

	if(n==0)
	{
		cout<<"There is only 1 digits No.";
	}
	else
	{
		while(n!=0)
		{
		n=n/10;
		count++;
		}
		cout<<"There are "<<count<<" digits in No.";
	}
	return 0;
}
