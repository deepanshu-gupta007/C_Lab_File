"""
Name: Deepanshu Gupta
Section: E
Roll Number: 20
13. Write a program in Python. A library charges a fine for every book returned late. For First 5 days the fine is 50 paisa/day, for 6-10 days fine is one rupee/day and above 10 days fine is 5 Rupees/ per day. If you return the book after 30 days your membership will be cancelled. Write a program to accept the number of days the member is late to return the book and display the fine or the appropriate message.
"""

print("\t\t\t******INPUT******\n")
days=int(input("Enter number of days: "))
print("\t\t\t******OUTPUT******\n")
if days>0 and days<=5:
    print("Fine = Rs. ", 0.50*days)
elif days>5 and days<=10:
    print("Fine = Rs. ", days)
elif days>10 and days<=30:
    print("Fine = Rs. ", 5*days)
elif days>30:
    print("Your membership will be cancelled now and your fine is Rs. ", 5*days)
else:
    print("Days cannot be in negative")
