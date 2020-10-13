#include<iostream>
using namespace std;

// program to find maximum number in array of max size 10
int main(){
    
    int *array, size;
    cout<<"Enter the size of array : ";
    cin>>size;
    array = new int[size]; //creating array dynamically with new keyword
    
    // taking in the value of array
    cout<<"Enter the numbers : "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    //finding the maximum number in array and then placing it at the zeorth index
    for (int i = 1; i < size; i++)
    {
        if(arr[0] < arr[i])
            arr[0] = arr[i];
    }
    cout<<"Largest number is :"<<arr[0]<<endl;
    
    delete[] array;  //releasing memory
    return 0;
}
