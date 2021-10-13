#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Program to Count Number of Digits in an Integer
    
    int x,count=0;
    cin>>x;
    while(x>0)
    {
       count++;
       x/=10;
    }

    cout<<"No. of digits= "<<count;
    return 0;
}
