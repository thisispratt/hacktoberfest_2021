/*Created by Nevergiv3up*/

//This Program is written in C++ language and helps in finding average of n number's in an array.

#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long int n;
  double sum=0;
  cout<<"PLEASE ENTER THE LENGTH OF THE ARRAY"<<endl;
  cin>>n;   //Taking input of how many numbers the array will consist of
  if(n<=0)
  {
    cout<<"INVALID INPUT";
  }
  else
  {
  int array[n]; //definining an array of size n
  for(int i=0;i<n;i++)
  {
    cin>>array[i];         //Taking input of array elements
  }
  for (int i = 0; i < n; ++i)
  {
    sum+=array[i]; //Storing the sum of all elements in a variable
  }
  cout<<"Average of numbers using arrays "<<float(sum/n)<<endl;    //Finding the average
  return 0;
  }
}
