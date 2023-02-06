"""
Name: Deepanshu Gupta
Section: E
Roll Number: 20
14. Take input of age of 3 people by user and determine oldest and youngest among them.
"""

print("\t\t\t******INPUT******\n")
n1=int(input("Enter age of person 1: "))
n2=int(input("Enter age of person 2: "))
n3=int(input("Enter age of person 3: "))
print("\t\t\t******OUTPUT******\n")
if n1>n2 and n1>n3:
    print("Person 1 is oldest")
elif n2>n3:
    print("Person 2 is oldest")
else:
    print("Person 3 is oldest")
if n1<n2 and n1<n3:
    print("Person 1 is youngest")
elif n2<n3:
    print("Person 2 is youngest")
else:
    print("Person 3 is youngest")
