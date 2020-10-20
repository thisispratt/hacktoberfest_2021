#include <stdio.h>

int main()
{
    int num1,num2,temp;
    printf("Enter 2 numbers");
    scanf("%d %d",&num1,&num2);
    while (num1%num2!=0)
    {
        temp=num2;
        num2=num1%num2;
        num1=temp;
        
    }
    printf("Greatest common divisor: %d \n",num2);

}
