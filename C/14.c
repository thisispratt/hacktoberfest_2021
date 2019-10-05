#include<stdio.h>
#include<conio.h>
void main()
{
    clrscr();
    int yr;
    printf("\n Enter year:");
    scanf("%d",&yr);
    if (yr%4==0);
    printf("\n leap year");
    else
    {
        printf("\n not a leap year");
    }
    getch();
}