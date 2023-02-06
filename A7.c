/*
Name: Deepanshu Gupta
Section: E
Roll Number: 20
7. WAP to add elements of two unequal size array into 3rd array using Dynamic Memory
Allocation.
*/

#include<stdio.h>
#include<stdlib.h>
int main() {
    int *a, *b, *c, n1, n2, x, i;
    printf("\t\t\t******INPUT******\n");
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    a=(int *)malloc(n1*sizeof(int));
    for(i=0; i<n1; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", a+i);
    }
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    b=(int *)malloc(n2*sizeof(int));
    for(i=0; i<n2; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", b+i);
    }
    if (n1>n2) x=n1;
    else x=n2;
    c=(int *)malloc(x*sizeof(int));
    if (x==n1){
        for(i=0; i<x; i++){
            if (i<n2)
                *(c+i)=*(a+i)+*(b+i);
            else
                *(c+i)=*(a+i);
        }
    }
    if (x==n2){
        for(i=0; i<x; i++){
            if (i<n1)
                *(c+i)=*(a+i)+*(b+i);
            else
                *(c+i)=*(b+i);
        }
    }
    printf("\t\t\t******OUTPUT******\n");
    printf("Result: \n");
    for(i=0; i<x; i++)
        printf("%d\t", *(c+i));
    return 0;
}