#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();
    float a,b,x=0;
    printf("Enter first number: ");
    scanf("%f",&a);
    printf("Enter second number: ");
    scanf("%f",&b);
    x=a*b;
    printf("The product of the numbers is: %d",x);
    getch();
}