#include <iostream>
using namespace std;

struct student
{
    char name[50];
    int roll;
    float marks;
} s[10];

int main()
{
    cout<<"Enter information of students: "<<endl;

    // storing information
    for(int i = 0; i < 10; ++i)
    {
        s[i].roll = i+1;
        cout<<"For roll number"<<s[i].roll<<","<<endl;

        cout<<"Enter name: ";
        cin>>s[i].name;

        cout<<"Enter marks: ";
        cin>>s[i].marks;

        cout<<endl;
    }