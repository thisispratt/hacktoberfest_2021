def findFactorial(n):
	fact = 1
	for i in range(1,n+1):
		fact = fact * i
	return fact

n = input("Enter the number :")
factorial = findFactorial(int(n))
print(factorial)
