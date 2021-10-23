#include <iostream>

int reverseNumber(int n ){
	int lastDigit, reversedNumber = 0;
	while ( n > 0){
		lastDigit = n%10;
		reversedNumber = (reversedNumber*10) + lastDigit;
		n /= 10;
	}
	return reversedNumber;
}

int main(int argc, char const *argv[]){
	int n;
	if (argc > 1){ // if passed command line arguments
		n = atoi(argv[1]);
	}
	else // if command line arguments are not passed
		std::cin >> n;
	std::cout << "Original Number: " << n << '\n'
			  << "Reversed Numebr: " << reverseNumber(n) << '\n';
	return 0;
}