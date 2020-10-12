#include<iostream>
using namespace std;

// program to find maximum number in array of max size 10
int main(){
    int arr[10];
    int n;
    cout<<"Enter the size of array(max:10) : ";
    cin>>n;
    cout<<"Enter the numbers: "<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        if(arr[0] < arr[i])
            arr[0] = arr[i];
    }
    cout<<"Largest number is :"<<arr[0]<<endl;
    return 0;
}
