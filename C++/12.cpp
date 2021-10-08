// 12. Program to Find the Largest Number Among Three Numbers

#include<iostream>
using namespace std;

int main()
{
    int a, b, c; 
    cout<<"Please Enter Three Numbers : ";
    cin>>a>>b>>c;
    cout<<"Largest Number Among all three numbers are : ";
    if(a>b){
        if(a>c)
            cout<<a<<endl;
        else
            cout<<c<<endl;
    }
    else{
        if(b>c)
            cout<<b<<endl;
        else
            cout<<c<<endl;
    }
    return 0;
}