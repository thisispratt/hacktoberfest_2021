#include <iostream>

int findLargestAmong(int a, int b, int c){
	if(a > b and a > c)			return a;
	else if (b > a and b > c)	return b;
	else 						return c;
}

int main(int argc, char const *argv[]){
	int a, b, c;
	if (argc > 1){ // if passed command line arguments
		a = atoi(argv[1]), b = atoi(argv[2]), c = atoi(argv[3]);
	}
	else // if command line arguments are not passed
		std::cin >> a >> b >> c;
	std::cout << "Largest number is: " << findLargestAmong(a,b,c) << '\n';
	return 0;
}