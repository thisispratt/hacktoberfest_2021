def GCD(a,b):
    if b==0:
        return a
    r=a%b
    return GCD(b,r)
numbers=input()
nums=numbers.split("Enter two numbers:")
a=int(nums[0])
b=int(nums[1])
print("lcm of two numbers:",(a*b)//GCD(a,b))
