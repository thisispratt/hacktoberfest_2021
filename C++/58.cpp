#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str, res = "";
    getline(cin, str);
    int index = 0, len = str.length();
    for (index = 0; index < len; index++)
    {
        res += str[index];
    }
    cout << res;
    return 0;
}
