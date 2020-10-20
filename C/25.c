#include <stdio.h>

int main()
{

    int num,new;
    new=0;
    printf("Enter a number");
    scanf("%d",&num);
    while (num > 0)
    {
        new=new*10;
        new=(new+(num % 10));
        num=num/10;
    }
    printf("The reversal is %d \n",new);





}