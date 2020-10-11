#include <stdio.h>
#include <stdlib.h>

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i], "\n");
    }
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
    printf("The sorted array is : \n");
    insertionSort(a, size);
    return 0;
}