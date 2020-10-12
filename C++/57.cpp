// Program : Concatenate Two Strings

#include <iostream>
#include <string>
#include <cstring>

std::string concatenate(const std::string& a, const std::string& b) {
    // Allocate memory
    std::string result;
    result.reserve(a.size() + b.size());

    // Add both strings
    for (auto c : a)
        result += c;

    for (auto c : b)
        result += c;

    return result;
}

char *concatenateCString(const char *a, const char *b) {
    // Allocate memory
    size_t aLen = strlen(a);
    size_t bLen = strlen(b);
    char *result = new char[aLen + bLen + 1];

    memcpy(result, a, aLen);

    // Copy also the trailing zero
    memcpy(result + aLen, b, bLen + 1);

    return result;
}

int main() {
    using namespace std;

    string a, b;

    cout << "Enter the first string : ";
    cin >> a;
    cout << "Enter the second string : ";
    cin >> b;

    string c = concatenate(a, b);
    cout << "The resulting string is :" << endl << c << endl;

    // Test the c string version
    char *c2 = concatenateCString(a.c_str(), b.c_str());
    if (strcmp(c.c_str(), c2) != 0)
        cerr << "Error : concatenateCString doesn't output the same value as "
            "concatenate" << endl;

    delete[] c2;

    return 0;
}

