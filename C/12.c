#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is the greatest number \n", a);
        }
        else
        {
            printf("%d is the greatest number \n", c);
        }
    }
    if (b > c)
    {
        printf("%d is the greatest number \n", b);
    }
    else
    {
        {
            printf("%d is the greatest number \n", c);
        }
    }
    return 0;
}