#include <stdio.h>

int main()
{
    int number, o, t, h, th;
    printf("Enter a 4 digit number :");
    scanf("%d", & number);
    o = number % 10;
    t = ((number % 100) - o) / 10;
    h = ((number % 1000) - o - (10 * t)) / 100;
    th = number / 1000;
    printf("the reverse number is : %d \n", (1000 * o )+ (100 * t) + (10 * h) + th);
    return 0;
}