#include<iostream>
using namespace std;
main()
{
    int a;
    bool isLeapYear;

    cout<<"enter a year: "
    cin>>a;

    if (a % 400 == 0)
        isLeapYear = true;
    else if (a % 100 == 0)
        isLeapYear = false;
    else if (a % 4 == 0)
        isLeapYear = true;
    else
        isLeapYear = false;
       
     if(isLeapYear)
         cout << "year " << a << " is a leap year";
     else
         cout << "The year given is not a leap year";
}
