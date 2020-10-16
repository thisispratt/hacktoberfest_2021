#include <bits/stdc++.h> 
using namespace std; 
  
// Shuffle array 
void shuffle_array(int arr[], int n) 
{ 
  
    // To obtain a time-based seed 
    unsigned seed = 0; 
  
    // Shuffling our array 
    shuffle(arr, arr + n, 
            default_random_engine(seed)); 
  
    // Printing our array 
    for (int i = 0; i < n; ++i) 
        cout << arr[i] << " "; 
    cout << endl; 
} 
  
// Driver code 
int main() 
{ 
  
    // input the size of array
    int n;
    cin >> n;

    // input the array a;
    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];
  
    // int n = sizeof(a) / sizeof(a[0]); 
  
    shuffle_array(a, n); 
  
    return 0; 
} 
