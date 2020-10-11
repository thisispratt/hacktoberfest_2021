#include <iostream>
using namespace std;

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
    cout << arr[i] << " ";
    cout << endl;
  }
}

int main()
{
  int *a, size;
  cout << "Enter the size of Array :\n";
  cin >> size;
  a = new int[size];
  cout << "Enter the Array : \n";
  for (int i = 0; i < size; i++)
  {
    cin >> a[i];
  }
  cout << "Sorted Array is : \n";
  selectionSort(a, size);
  return 0;
}