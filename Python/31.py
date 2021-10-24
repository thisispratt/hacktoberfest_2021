print("Calculator:")

print("1-Addition\n2-Subtraction\n3-Multiplication\n4-Division")

choice=int(input("Enter the choice:"))

a=float(input("Enter the number 1:"))

b=float(input("Enter the number 2:"))



def func(a,b):
    if b==0:
        return "Invalid Input"
    else:
        return (a/b)
        



switch={

    1: (a+b),

    2: (a-b),

    3: (a*b),

    4: func(a,b)

}




print(switch.get(choice))
