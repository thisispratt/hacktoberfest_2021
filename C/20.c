#include<stdio.h>
void main()
{
int a=0,b=1,c,num;
printf("Please enter n of the series\n");
scanf("%d",&num);
for (a=0;num>=a;a+1)
{ printf("%d\n",a);
 c=a+b;
 a=b;
 b=c;
 }
 }
