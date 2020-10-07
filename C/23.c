//program to print the alphabet 

#include <stdio.h>

int main()
{
    int i;

    for(i = 65; i <= 90; i++)   //ASCII value of 'A'=65, 'Z'=90
        printf("%c ", i);

    printf("\n");
}