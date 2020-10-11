#include <iostream>
#include <stdlib.h>
using namespace std;

void linear_search(int arr[], int element, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            cout << "\nLinear Search : Element  : " << element << " : Found :  Position : " << i + 1 << ".\n";
            break;
        }
    }

    if (i == n)
        cout << "\nSearch Element : " << element << "  : Not Found \n";
}

int main()
{
    int *a, size, i, element;
    cout << "\nEnter Size of Array ";
    cin >> size;
    a = new int[size];
    cout << " \nElements for Searching : " << endl;
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "\nYour Data   :";
    for (i = 0; i < size; i++)
    {
        cout << "\t" << a[i];
    }

    cout << "\nEnter Element to Search : ";
    cin >> element;

    linear_search(a, element, size);
}