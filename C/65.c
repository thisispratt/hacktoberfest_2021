// 65. C Program to Store Information Using Structures with Dynamically Memory Allocation

#include <stdio.h>
#include <stdlib.h>

struct contacts
{
    int age;
    char name[50];
};

int main()
{
    struct contacts *ptr;
    int i, n;
    printf("Enter the number of contacts: ");
    scanf("%d", &n);

    // Dynamic memory allocation for n contacts

    ptr = (struct contacts *)malloc(n * sizeof(struct contacts));
    for (i = 0; i < n; i++)
    {
        printf("Enter the name and age of the contact respectively:\n");
        scanf("%s %d", (ptr + i)->name, &(ptr + i)->age);
    }

    printf("Your contacts are:\nName\tAge\n");

    for (i = 0; i < n; i++)
        printf("%s\t%d\n", (ptr + i)->name, (ptr + i)->age);

    return 0;
}