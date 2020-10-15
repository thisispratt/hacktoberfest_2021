#include<iostream>
using namespace std;
main()
{
  int a,b=1;
  cout<<"Enter a number:";
  cin>>a;
  for(int i=1;i<=a;i++)
  {
     b=b*i;
  }
  cout<<a<<"!"<<"= "<<b;
}

