#include <stdio.h>
#include <stdlib.h>

int linear_search(int *pointer, int n, int find)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (*(pointer + i) == find)
            return i;
    }

    return -1;
}

int main()
{
    int *a, search, i, size, position;

    printf("Enter the number of elements in array\n");
    scanf("%d", &size);

    a = (int *)malloc(sizeof(size));

    printf("Enter %d numbers\n", size);

    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number to search\n");
    scanf("%d", &search);

    position = linear_search(a, size, search);

    if (position == -1)
        printf("%d is not present in array.\n", search);
    else
        printf("%d is present at location %d.\n", search, position + 1);

    return 0;
}
