#include <iostream>
using namespace std;
int main(){
    char original[500], copy[500];
    int x = 0;
 cout << "Enter a string" << endl;
    cin.getline(original, 500);
    // Copy String 
    while(source[x] != '\0'){
        copy[x] = original[x];
        x++;
    }
    copy[x] = '\0';
    cout << "Input String: " << original << endl;
    cout << "Copy String: " << copy;
    return 0;
}
