#include <iostream>
using namespace std;

int main()
{
	int n,i;
	cout<<"Enter Number: ";
	cin>>n;

	for(i=2; i<n; i++)
	{
		if(n%i==0)
		{
			break;
		}
	}

	if(i==n)
	{
		cout<<n<<" Is a Prime No.";
	}
	else
	{
		cout<<n<<" Not Prime";
	}
	return 0;
}