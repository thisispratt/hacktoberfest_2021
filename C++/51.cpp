#include<iostream>
using namespace std;

int swap(int &a,int &b,int &c)
{
    int temp;
    temp=a;
    a=b;
    b=c;
    c=temp;
    return 0;
}

int main()
{
    int a,b,c;
    
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the value of c: ";
    cin>>c;

    cout<<"\n";

    cout<<"Before swap: a="<<a<<" b="<<b<<" c="<<c<<endl;
    
    swap(a,b,c);
    
    cout<<"After swap: a="<<a<<" b="<<b<<" c="<<c<<endl;

    cout<<"\n";
    
    return 0;
}