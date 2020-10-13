#include<stdio.h>  
 int main()    
{    
int a,b;
printf("Enter num1:");
scanf("%d",&a);
printf("Enter num2:");
scanf("%d",&b);
printf("Before swap a=%d b=%d",a,b);      
a=a+b;    
b=a-b;    
a=a-b; 
printf("\nAfter swap a=%d b=%d",a,b);    
return (0);  
}   
