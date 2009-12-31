#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n,i;
    char a[100];

    cout<<"Enter the string:";
    cin>>a;
    n=strlen(a);
    

    for (i=0;i<n;i++)
   {
    if((a[i]>96 && a[i]<123)||(a[i]>64 && a[i]<91)||(a[i]==32))
    cout<<a[i];
   }
    cout<<endl;

}