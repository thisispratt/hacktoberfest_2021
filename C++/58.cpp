//C++ implementation for Copy String Without Using strcpy()
#include<iostream>
using namespace std;
int main() 
{ 
	char s1[] = "Hello World", s2[100], i; 
	cout<<"string s1 : "<<s1; 
	for (i = 0; s1[i] != '\0'; ++i) { 
		s2[i] = s1[i]; 
	} 
	s2[i] = '\0'; 
	cout<<"String s2 : "<<s2; 
	return 0; 
} 