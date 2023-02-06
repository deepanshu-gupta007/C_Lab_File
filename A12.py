"""
Name: Deepanshu Gupta
Section: E
Roll Number: 20
12. Write a python program to print factorial of a number.
"""

print("\t\t\t******INPUT******\n")
num=int(input("Enter a number: "))
print("\t\t\t******OUTPUT******\n")
if num<0:
    print("Not possible")
elif num == 0:
    print("Factorial if ", 0, " is ", 1)
else:
    f=1
    for i in range(1, num+1):
        f=f*i
    print("The factorial of ",num," is ",f)
