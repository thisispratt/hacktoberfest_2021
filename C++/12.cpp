//Program to Find the Largest Number Among Three Numbers

#include<iostreeam.h>
#include<conio.h>
void main(){
  int a,b,c;
  cout<<"Enter any three number=";
  cin>>a>>b>>c;
  if(a>b){
    if(a>c){
      cout<<a<<" is the largest number among the all three.";
    }
    else{
      if(c>b){
        cout<<c<<" is the largest number among the all three.";
      }
    }
  }
  else{
    if(b>c){
      cout<<c<<" is the largest number among the all three.";
    }
    else{
      if(c>a){
        cout<<c<<" is the largest number among the all three.";
      }
    }
  }
  
}
