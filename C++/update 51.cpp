#include <bits/stdc++.h>
using namespace std;
void cyclicSwap(int *a, int *b, int *c);
int main() {
    int a, b, c;

    cout<<"Enter a, b and c respectively: ";
    cin>>a>>b>>c;

    cout<<"Value before swapping:\n";
    cout<<a<<b<<c<<endl;

    cyclicSwap(&a, &b, &c);

    cout<<"Value after swapping:\n";
    cout<< a<<b<<c;

    return 0;
}

void cyclicSwap(int *n1, int *n2, int *n3) {
    int temp;
    // swapping in cyclic order
    temp = *n2;
    *n2 = *n1;
    *n1 = *n3;
    *n3 = temp;
}
