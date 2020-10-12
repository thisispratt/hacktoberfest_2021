#include<iostream>
using namespace std ;
int main()
{
  int i=0,j=0,n,m,a[10][10],b[10][10],c[10][10];
  int n1,m1;
    cout<<"enter the value of n and m of matrix A\n";
  cin>>n>>m;
  cout<<"enter the value of n and m of matrix B\n";
cin>>n1>>m1;
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++){
      cout<<"enter the value of A("<<i<<")("<<j<<")=";
      cin>>a[i][j];
      cout<<"\n";
    }}

     for(i=0;i<n1;i++)
    {
      for(j=0;j<m1;j++){
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
  for(i=0;i<n1;i++)
  {
    for(j=0;j<m1;j++){
      cout<<b[i][j];
      cout<<" ";
    } cout<<"\n";
  }
  if(m==n1){
      cout<<"multiplication of two matrix is \n";
      int k=0;
    for(i=0;i<n;i++)
    {
      for(j=0;j<m1;j++){
        c[i][j]=0;
      for(k=0;k<m;k++){
        c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
      }
    }
     for(i=0;i<n;i++)
    {
      for(j=0;j<m1;j++){
        cout<<c[i][j]<<" ";
       }
        cout<<"\n";}

        }
  else
  {
    cout<<"multiplication is not possible";
  }

return 0;
}