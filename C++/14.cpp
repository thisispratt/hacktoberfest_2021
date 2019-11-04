#include<iostream>
using namespace std;
main()
{
    int a;
    cout<<"enter a year: "
    cin>>a;
    if(a%4==0)
    cout<<"year "<<a<<" is a leap year";
    else 
    cout<<"The year given is not a leap year";
}
