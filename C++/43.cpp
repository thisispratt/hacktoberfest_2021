/*Created by Nevergiv3up*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long int n;
  double sum=0;
  cin>>n;
  if(n<=0)
  {
    cout<<"INVALID INPUT";
  }
  else
  {
  int array[n];
  for(int i=0;i<n;i++)
  {
    cin>>array[i];
  }
  for (int i = 0; i < n; ++i)
  {
    sum+=array[i];
  }
  cout<<"Average of numbers using arrays "<<float(sum/n)<<endl;
  return 0;
  }
}
