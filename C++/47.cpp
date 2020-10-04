#include <iostream>
using namespace std;

int cnt=0,p;
int rec(int n)
{   
    if(cnt<p)
    {
        cnt++;
        return n*rec(n);
    }
    else 
    return 1;
    //return n;
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	cin>>p;
	n=rec(n);
	cout<<n;
	return 0;
}
