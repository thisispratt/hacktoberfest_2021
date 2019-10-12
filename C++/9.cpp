#include<iostream>
using namespace std;
class Swap
{
public:
 int a,b,c;
  void fun()
  {
  cout<<"enter number a:";
  cin>>a;
  cout<<"enter number b:";
  cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"after swapping"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
  }
 };
 main()
 {
    Swap o;
    o.fun();
 }
 
