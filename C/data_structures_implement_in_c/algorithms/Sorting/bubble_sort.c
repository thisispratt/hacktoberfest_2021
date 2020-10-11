#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
            }
        }
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
    bubbleSort(a, size);
    return 0;
}