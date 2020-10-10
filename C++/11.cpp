#include <iostream.h>
using namespace std;
int main ()
{
	char i;
        cout<<"Input one alphabet= ";
        cin>>i;
        if(i=='a'||i=='i'||i=='u'||i=='e'||i=='o'||i=='A'||i=='I'||i=='U'||i=='E'||i=='O'){
        	cout << "Character is vocal";
        }
        else{
		cout << "Character is consonant";
	}
        return 0;

}
