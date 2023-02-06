/*
Name: Deepanshu Gupta
Section: E
Roll Number: 20
9. Write a structure to store the names, salary and working hours per day (fixed at the time
of joining) of 10 employees. Calculate the increased monthly salary depending on the
working hours per day as given below. Print the name of all the employees along with their
new salaries.
Hours of work per day 8 10 >=12
Increase in salary Rs.2500 Rs. 5000 Rs.7500
*/

#include<stdio.h>
struct employee {
    char name[50];
    int salary, work_h, new_salary;
};
int main () {
    struct employee s[10];
    printf("\t\t\t******INPUT******\n");
    for (int i=0; i<10; i++) {
        printf("Employee %d -\n", i+1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter salary: ");
        scanf("%d", &s[i].salary);
        printf("Enter working hours: ");
        scanf("%d", &s[i].work_h);
    } 
    printf("\t\t\t******OUTPUT******\n");
    for(int i=0; i<10; i++) {
        if (s[i].work_h>=8 && s[i].work_h<10)
            s[i].new_salary=s[i].salary+2500;
        else if (s[i].work_h>=10 && s[i].work_h<12)
            s[i].new_salary=s[i].salary+5000;
        else if (s[i].work_h>=12)
            s[i].new_salary=s[i].salary+7500;
        else s[i].new_salary=s[i].salary;
        printf("%s\t%d\n", s[i].name, s[i].new_salary);
    }
    return 0;
}