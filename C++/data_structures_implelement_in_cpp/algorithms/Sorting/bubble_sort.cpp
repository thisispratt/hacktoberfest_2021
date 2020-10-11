#include <iostream>
using namespace std;

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
    bubbleSort(a, size);

    return 0;
}