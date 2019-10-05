#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();
    int a,b,sum=0;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    sum=a+b;
    printf("The sum of the two numbers is: %d",sum);
    getch();
}