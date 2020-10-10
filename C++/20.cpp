#include <iostream>
using namespace std;
int fibonacci(int a)
{
	int res, num, i;
		if(a==1||a==2)
	{
		res=1;
	}
	else
	{
		res = fibonacci(a-2)+fibonacci(a-1);
	}
return res;
}
int main()
{
	int num, i;
	cout<<"num : "; cin >> num;
	for(i=1;i<=num;i++)
	{
		cout<<fibonacci(i)<<" ";
	}
}
