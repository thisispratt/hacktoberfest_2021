#include <iostream>
using namespace std;

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
    insertionSort(a, size);
    return 0;
}