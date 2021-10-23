# Python program to check if a number is Palindrome or not

n=int(input("Enter number:"))
num=n
rev=0
while(n>0):
    dig=n%10
    rev=rev*10+dig
    n=n//10
if(num==rev):
    print("The number is a palindrome")
else:
    print("The number is not a palindrome!")
    
    
# Enter number:12199
# The number is not a palindrome
