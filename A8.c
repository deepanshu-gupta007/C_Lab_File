/*
Name: Deepanshu Gupta
Section: E
Roll Number: 20
8. Define a structure to store the roll no., name, age (between 11 to 14) and address of
students. Input and store records of more than 10 students. Write a function to print the
names of all the students having age 14 and even roll number.
*/

#include<stdio.h>
void pnt(int, int, char[50]);
struct students {
    char name[50], add[200];
    int roll_no, age;
};
int main () {
    int n, i;
    printf("\t\t\t******INPUT******\n");
    printf("Enter no. of details to be entered: ");
    scanf("%d", &n);
    struct students s[n];
    for (i=0; i<n; i++) {
        printf("Student %d -\n", i+1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter address: ");
        scanf("%s", s[i].add);
        do {
        printf("Enter age (must between 11 to 14): ");
        scanf("%d", &s[i].age);
        } while (s[i].age<11 || s[i].age>14);
    }
    printf("\t\t\t******OUTPUT******\n");
    for(i=0; i<n; i++)
        pnt(s[i].age, s[i].roll_no, s[i].name);
    return 0;
}
void pnt(int a, int r, char s[50]){
    if(a==14 && r%2==0)
        printf("%s\n", s);
}