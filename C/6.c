#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,q,rem;
    clrscr();
    printf("Enter a number :");
    scanf("%d",&a);
    printf("\n Enter the number you want to divide the first number with :");
    scanf("%d",&b);
    rem=a%b;
    q=a/b;
    printf("\n The remainder is : %d",rem);
    printf("\n The quotient is :%d",q);
    getch();
    
}