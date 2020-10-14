#include<iostream>
using namespace std ;
int main()
{
  int i=0,j=0,n,m,a[10][10],b[10][10];

    cout<<"enter the value of n and m of matrix\n";
  cin>>n>>m;
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++){
      cout<<"enter the value of A("<<i<<")("<<j<<")=";
      cin>>a[i][j];
      cout<<"\n";
    }}
    for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++){
        cout<<"enter the value of B("<<i<<")("<<j<<")=";
        cin>>b[i][j];
        cout<<"\n";
      }
  }
  cout<<"matrix A\n";
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++){
      cout<<a[i][j];
      cout<<" ";
    } cout<<"\n";
  }
  cout<<"matrix B\n";
   for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++){
      cout<<b[i][j];
      cout<<" ";
    } cout<<"\n";
  }
  if(n==m){
      cout<<"sum of two matrix is \n";
    for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++){
        cout<<a[i][j]+b[i][j];
        cout<<" ";
      } cout<<"\n";
    }


}
  else
  {
    cout<<"addition is not possible";
  }

return 0;
}
