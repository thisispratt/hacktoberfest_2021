#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();
    float a,b,x=0;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    x=a*b;
    printf("The product of the numbers is: %d",x);
    getch();
}