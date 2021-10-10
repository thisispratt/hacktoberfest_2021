

print("Calculator:")
print("1-Addition\n2-Subtraction\n3-Multiplication\n4-Division")
choice=int(input("Enter the choice:"))
a=int(input("Enter the number 1:"))
b=int(input("Enter the number 2:"))


switch={
    1: (a+b),
    2: (a-b),
    3: (a*b),
    4: 2(a/b)
}

print(switch.get(choice))
