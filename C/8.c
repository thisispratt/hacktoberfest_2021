#include <stdio.h>

int main()
{
	long int a = 0;
	printf("Enter a value: ");
	scanf_s("%ld", &a);
	printf("%ld", a);
	return 0;
}
