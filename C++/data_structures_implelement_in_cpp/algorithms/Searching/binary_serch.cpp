#include <iostream>
using namespace std;

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

    int res = binary_search(a, size, element);

    if (res != -1)
    {
        cout << "\nElement found at position " << res + 1;
    }
    else
    {
        cout << "\nElement is not found....!!!";
    }
    return 0;
}
