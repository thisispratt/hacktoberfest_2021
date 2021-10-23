#include <iostream>

int countNoOfDigts(long long n ){
	int count = 0;
	while (n > 0){
		n /= 10; // every time division by 10 removes one digit from last
		count++;
	}
	return count;
}

int main(int argc, char const *argv[]){
	int n;
	if (argc > 1){ // if passed command line arguments
		n = atoi(argv[1]);
	}
	else // if command line arguments are not passed
		std::cin >> n;
	std::cout << "No of digitd in " << n << " are : " << countNoOfDigts(n) << '\n';
	return 0;
}