#include <stdio.h>
#include <stdlib.h>

int countNoOfDigts(long long n ){
	int count = 0;
	while (n > 0){
		n /= 10; // every time division by 10 removes one digit from last
		count++;
	}
	return count;
}

int main(int argc, char const *argv[]){
	long long n;
	if (argc > 1){ // if passed command line arguments
		n = atoi(argv[1]);
	}
	else // if command line arguments are not passed
		scanf("%lld",&n);
	printf("No of digitd in %lld are : %d\n",n,countNoOfDigts(n));
	return 0;
}