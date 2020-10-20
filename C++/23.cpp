#include <iostream>
using namespace std;

int main()
{
    int i;
    cout<<"\n The list of alphabets from A to Z: "<<endl;
    for (i = 65; i <= 90; i++)  //ASCII value of 'A'=65, 'Z'=90
        printf(" %c", i);

    printf("\n");
}