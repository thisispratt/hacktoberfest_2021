#include <stdio.h>
int main() {
    int n, i, k=0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
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
  }
      if (k==0)
            printf("%d is a prime number.", n);
      else
            printf("%d is not a prime number.", n);


    return 0;
}
