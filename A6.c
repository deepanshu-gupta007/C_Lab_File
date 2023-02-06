/*
Name: Deepanshu Gupta
Section: E
Roll Number: 20
6. WAP to reverse the digits of a number using pointer.
*/

#include<stdio.h>
int main() {
    int num, *p, rev, n=0, *r;
    p=&num, r=&n;
    printf("\t\t\t******INPUT******\n");
    printf("Enter number: ");
    scanf("%d", p);
    while(*p!=0){
        rev=*p%10;
        *r=*r*10 + rev;
        *p/=10;
    }
    printf("\t\t\t******OUTPUT******\n");
    printf("New number: %d", *r);
    return 0;
}