#include <stdio.h>
#include <stdlib.h>

int binary_search(int a[], int n, int e)
{
    int f, l, m;
    f = 0;
    l = n - 1;

    while (f <= l)
    {
        m = (f + l) / 2;
        if (e == a[m])
            return (m);
        else if (e > a[m])
            f = m + 1;
        else
            l = m - 1;
    }

    return -1;
}

int main()
{
    int *a, size, i, element;
    printf("\nEnter Size of Array ");
    scanf("%d", size);
    a = (int *)malloc(sizeof(size));
    printf(" \nElements for Searching : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", a[i]);
    }
    printf("\nYour Data  :");
    for (i = 0; i < size; i++)
    {
        printf("\t%d", a[i]);
    }

    printf("\nEnter Element to Search : ");
    scanf("%d", element);

    int res = binary_search(a, size, element);

    if (res != -1)
    {
        printf("\nElement found at position %d ", res + 1);
    }
    else
    {
        printf("\nElement is not found....!!!");
    }
    return 0;
}
