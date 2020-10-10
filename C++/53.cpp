#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    map<char,int> frequency_map;
    string s;
    cout<<"Enter a String:\n";
    cin>>s;
    for(char c : s){
        frequency_map[c]++;
    }
    for(auto pair : frequency_map){
        cout<<pair.first<<"->"<<pair.second<<"\n";
    }
}
