/*
Name: Deepanshu Gupta
Section: E
Roll Number: 20
2. Write a c code that loops over the string and replace each character to the character
immediately preceding it in the alphabet.
Example
Input String: HELLO
Output String: GDKKN
*/

#include<stdio.h>
int main () {
    char a[50]; 
    int l, i;
    printf("\t\t\t******INPUT******\n");
    printf("Enter a string: ");
    gets(a);
    for (l=0; a[l]!='\0'; l++);
    for (i=0; i<l; i++)
        a[i]=a[i]-1;
    printf("\t\t\t******OUTPUT******\n");
    printf("New String = %s", a);
    return 0;
}
