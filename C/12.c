#include <stdio.h>
#include <stdlib.h>

int findLargestAmong(int a, int b, int c){
	if(a > b && a > c)			return a;
	else if (b > a && b > c)	return b;
	else 						return c;
}

int main(int argc, char const *argv[]){
	int a, b, c;
	if (argc > 1){ // if passed command line arguments
		a = atoi(argv[1]), b = atoi(argv[2]), c = atoi(argv[3]);
	}
	else // if command line arguments are not passed
		scanf("%d%d%d",&a,&b,&c);
	printf("Largest number is: %d\n",findLargestAmong(a,b,c));
	return 0;
}