#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your number: ";
    cin>>n; //Input number from user
    for(int i=1;i<=10;i++)
    {
        cout<<n<<" X "<<i<<" = "<<n*i<<endl; // display multiplication table
    }
    return 0;
}