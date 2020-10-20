#include<iostream>
using namespace std;
class Swap
{
 int a,b;
public:
  void fun()
  {
  cout<<"enter number a:";
  cin>>a;
  cout<<"enter number b:";
  cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
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
 
