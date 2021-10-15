#include <stdio.h>
int main()
{
    long long num;
    int count = 0;
    printf("Enter any number: ");
    scanf("%lld", &num);
    do
    {
        count++;
        num /= 10;
    }
    while(num != 0);
    printf("Digits count = %d", count);
    return 0;
}
