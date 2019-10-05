#include<conio.h>
#include<stdio.h>

void main()
{
    clrscr();
    int a,b,c,d;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    c=a/b;
    d=a%b;
    printf("Quotient is: %d \n",c);    // quotient
    printf("Remainder is: %d \n",d);   // remainder
    getch();

}