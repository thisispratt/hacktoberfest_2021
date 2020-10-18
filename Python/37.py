# Python function to compute GCD of two numbers using recursion
def gcd(a,b):
    if(b==0): # Base case
        return a
    else:
        return gcd(b,a%b) # Recursive call

# Tester code
a=int(input("Enter first number:"))
b=int(input("Enter second number:"))
GCD=gcd(a,b)
print("GCD is: ")
print(GCD)