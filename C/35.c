/* A program to find the sum from 0 to N given numbers with recursion*/

#include<stdio.h>


long int sum( int n );

/* The function calculates the sum by:
*  recalling the previous sum until base case
*  adding n to received value
*  returning sum*/

/* So in this specific case, the return would be either 
*  printed(in main() ) or added to it's predecessor(in sum() ) */
long int sum( int n ){

//Base case, in wich the sum would be 0
    if ( n == 0)
        return n;

//Adding n to sum of n - 1;
    else
        return n + sum( n - 1 );
}

int main(){
    int givenNumber;

    printf("Enter a positive number: ");
    scanf("%d", &givenNumber);

    printf("Sum of 0 to %d: %ld.\n", givenNumber, sum(givenNumber) );
}