/*
Name: Deepanshu Gupta
Section: E
Roll Number: 20
4. Write a program to check if the two strings entered by user are anagrams or not. Two words
are Said to be anagrams if the letters of one word can be rearranged to form the other word.
For example, HEART and EARTH are anagrams of each other.
*/

#include<stdio.h>
int main () {
    char a[100], b[100]; 
    int i, j, count=0, l1, l2;
    printf("\t\t\t******INPUT******\n");
    printf("Enter first string: ");
    gets(a);
    printf("Enter second string: ");
    gets(b);
    for(l1=0; a[l1]!='\0'; l1++);
    for(l2=0; b[l2]!='\0'; l2++);
    printf("\t\t\t******OUTPUT******\n");
    if (l1==l2) {
        for(i=0; i<l1; i++){
            for(j=0; j<l1; j++) {
                if (a[i]>=a[j]){
                    char temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
                if (b[i]>=b[j]){
                    char temp=b[i];
                    b[i]=b[j];
                    b[j]=temp;
                }
            }
        }
        for(i=0; i<l2; i++)
            if (a[i]==b[i]) count++;
        if (count==l1) printf("Both the strings are anagrams of each other.");
        else printf("Both the strings are not anagrams of each other.");
    }
    else printf("Both the strings are not anagrams of each other.");
    return 0;
}
