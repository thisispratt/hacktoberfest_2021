#include <iostream>
using namespace std;

int main()
{
	int n,r,y=0;
	cout<<"Enter Number: ";
	cin>>n;

	while(n!=0)
	{
		r=n%10;
		y=y*10+r;
		n=n/10;
	}
	cout<<"Reverse Number: "<<y;
	return 0;
}