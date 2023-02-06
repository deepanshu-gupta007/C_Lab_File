/*
Name: Deepanshu Gupta
Section: E
Roll Number: 20
10. Write a program to read 20 integers in a file. Separate them into two different files
prime.txt and nonprime.txt such that all prime numbers are copied in prime.txt and
remaining numbers in nonprime.txt. 
*/

#include<stdio.h>
int main() {
    int i, a;
    FILE *f1=fopen("integers.txt", "w");
    if (f1==NULL)
        printf("File not open");
    else {
        printf("\t\t\t******INPUT******\n");
        for (i=0; i<20; i++){
            printf("Enter number %d: ", i+1);
            scanf("%d", &a);
            fprintf(f1, "%d\n", a);
        }
        fclose(f1);
    }
    FILE *f2=fopen("integers.txt", "r");
    FILE *p1=fopen("prime.txt", "w+");
    FILE *np1=fopen("nonprime.txt", "w+");
    if (f2==NULL || p1==NULL || np1==NULL)
        printf("Files not open to write");
    else {
        printf("\t\t\t******OUTPUT******\n");
        for (i=0; i<20; i++) {
            int count=0;
            fscanf(f2, "%d", &a);
            if (a==1) printf("1 is a composite number\n");
            else{
                for(int j=2; j<=a/2; j++){
                    if (a%j==0) {
                        count=1;
                        break;
                    }
                }
                if (count==0) fprintf(p1, "%d\n", a);
                else fprintf(np1, "%d\n", a);
            }
        }
        fclose(f2), fclose(p1), fclose(np1);
    }
    FILE *p2=fopen("prime.txt", "r");
    FILE *np2=fopen("nonprime.txt", "r");
    if (p2==NULL || np2==NULL)
        printf("Files not open to read");
    else {
        printf("Prime Numbers ('prime.txt')-\n");
        while(fscanf(p2, "%d", &a)!=(-1))
            printf("%d\t", a);
        printf("\n");
        printf("Non-Prime Numbers ('nonprime.txt')-\n");
        while(fscanf(np2, "%d", &a)!=(-1))
            printf("%d\t", a);
        printf("\n");
        fclose(p2), fclose(np2);
    }
    return 0;
}