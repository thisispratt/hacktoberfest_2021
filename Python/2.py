# Author:   Misbahud Din
# Date:     14/10/2020
# Description:  Program to Print an Integer (Entered by the User)

try:
    var = int(input("Enter an integer: "))
    print(f"You entered {var}")
except:
    print("You didn't entered integer :(")