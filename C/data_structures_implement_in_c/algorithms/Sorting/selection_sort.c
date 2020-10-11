#include <stdio.h>
#include <stdlib.h>

void selectionSort(int arr[], int n)
{
  int i, j, min;
  for (i = 0; i < n - 1; i++)
  {
    min = i;
    for (j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[min])
      {
        min = j;
      }
      arr[min] = arr[min] + arr[i];
      arr[i] = arr[min] - arr[i];
      arr[min] = arr[min] - arr[i];
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
  selectionSort(a, size);
  return 0;
}