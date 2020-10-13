#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(auto &x:a)
	cin>>x;
unsigned seed = chrono::system_clock::now().time_since_epoch().count();
	shuffle(a,a+n,mt19937(seed));
	//Based on mersenne twister 19937 engine
	for(auto &x:a)
	cout<<x<<" ";
}
