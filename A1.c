/*
Name: Deepanshu Gupta
Section: E
Roll Number: 20
1. WAP to insert a substring into a string from a particular position.
*/

#include<stdio.h>
int main () {
    char a[50], b[50]; 
    int l1, l2, x, i;
    printf("\t\t\t******INPUT******\n");
    printf("Enter a string: ");
    gets(a);
    printf("Enter a substring: ");
    gets(b);
    printf("Enter the index: ");
    scanf("%d", &x); 
    for (l1=0; a[l1]!='\0'; l1++);
    for (l2=0; b[l2]!='\0'; l2++);
    for (i=l1; i>=x; i--)
        a[i+l2]=a[i];
    for (i=0; i<l2; i++)
        a[i+x]=b[i];
    printf("\t\t\t*****OUTPUT*****\n");
    printf("New String = %s", a);
    return 0;
}
