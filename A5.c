/*
Name: Deepanshu Gupta
Section: E
Roll Number: 20
5. WAP using dynamic memory allocation to insert elements in an array and perform the
following operation:
i. Searching of an element.
ii. Replace the searched elements with its cube and print the array
Note: make 2 different user defined function to perform the operation.
*/

#include<stdio.h>
#include<stdlib.h>
int search(int, int, int *);
void replace(int, int, int *);
int main() {
    int n, i, a, v;
    printf("\t\t\t******INPUT******\n");
    printf("Enter the length of an array: ");
    scanf("%d", &n);
    int *arr=(int*)malloc(n*sizeof(int));
    for (i=0; i<n; i++) {
        printf("Enter the element %d: ", i+1);
        scanf("%d", arr+i);
    }
    n=n+1;
    printf("Enter the element to be inseted and the position where you want to be inserted:\n");
    scanf("%d %d", &a, &v);
    for (i=n-1; i>=v-1; i--)
        *(arr+i)=*(arr+i-1);
    *(arr+v-1)=a;
    printf("Enter element to be search: ");
    scanf("%d", &a);
    int x=search(a, n, arr);
    printf("\t\t\t******OUTPUT******\n");
    if (x==0) printf("Element not found\n");
    else printf("Element found at position = %d\n", x);
    printf("New Array: \n");
    replace(x, n, arr);
    return 0;
}
int search(int a, int n, int* arr){
    int i, c=0;
    for (i=0; i<n; i++){
        if (*(arr+i)==a){
            c=i+1;
            break;
        }
    }
    return c;
}
void replace(int x, int n, int* arr){
    *(arr+x-1)=(*(arr+x-1) * *(arr+x-1) * *(arr+x-1));
    for (int i=0; i<n; i++) 
        printf("%d\t", *(arr+i));
    printf("\n");
}