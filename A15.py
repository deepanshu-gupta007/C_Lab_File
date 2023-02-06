"""
Name: Deepanshu Gupta
Section: E
Roll Number: 20
15. A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years. Ask user for their salary and year of service and print the net bonus amount.
"""

print("\t\t\t******INPUT******\n")
salary=int(input("Enter salary: "))
years=int(input("Enter number of years of service: "))
print("\t\t\t******OUTPUT******\n")
if years>5:
    net_bonus=salary+salary*0.05
else: net_bonus=salary
print("Net bonus amount = Rs. ", net_bonus)
