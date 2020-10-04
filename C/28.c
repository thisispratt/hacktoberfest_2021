/* C Program to Check Whether a Number is Prime or Not */

#include <stdio.h>
int main() {
    //variable declaration
    int n, i, k=0;
    //taking input from the user.
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    //logic to check whether the input no. is prime or not.
    if (n==1) {
        printf("1 is neither prime nor composite.");
    }
    else {
 for (i=2;i<=n/2;i++) {
        if (n%i==0) {
            k=1;
            break;
        }
    }
    if (k==0)
          printf("%d is a prime number.", n);
    else
          printf("%d is not a prime number.", n);
  }
    return 0;
}
