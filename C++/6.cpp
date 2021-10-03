#include<iostream>
using namespace std;
main()
{
    int a,b,c,d;
    
    cout<<"Enter a value:";
    cin>>a;
    
    cout<<"Enter b value:";
    cin>>b;
    
    c= a % b;
    d = a / b;
    cout << "Remainder is =" << c << endl;
    cout << "Quotient is =" << d << endl;
}
