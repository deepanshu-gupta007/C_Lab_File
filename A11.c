/*
Name: Deepanshu Gupta
Section: E
Roll Number: 20
11. Write a program to create a file with some contents. Display its contents. Also print all
the positions of a given alphabet (user input) in the file.
*/

#include<stdio.h>
int main() {
    char c[500], x[3];
    int count=0, i;
    FILE *f=fopen("data.txt","w+");
    if (f==NULL)
        printf("File not opened");
    else {
        printf("\t\t\t******INPUT******\n");
        printf("Enter some content: ");
        scanf(" %[^\n]s", c);
        fputs(c, f);
        rewind(f);
        printf("Enter alphabet: ");
        scanf("%s", &x);
        printf("\t\t\t******OUTPUT******\n");
        printf("Content: %s\n", fgets(c, 500, f));
        printf("Positions = ");
        for (i=0; c[i]!='\0'; i++){
            if (c[i]==x[0]){
                count++;
                printf("%d\t", i+1);
            }
        }
        fclose(f);
    }
    return 0;
}