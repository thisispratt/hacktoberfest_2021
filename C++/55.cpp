// Remove All characters except alphabets
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	string ans="";
	for(auto c:s){
		if((c>='A'&&c<='Z')||(c>='a'&&c<='z')){
			ans+=c;
		}
	}
	cout<<ans;
	return 0;
}