/*
Name: Deepanshu Gupta
Section: E
Roll Number: 20
3. Write a program that takes your full name (First, middle and last) as input and displays the
abbreviations of the first and middle names except the last name which is displayed as it
is. For example, if your name is Aman Singh Rawat, then the output should be
A.S.Rawat.
*/

#include<stdio.h>
int main() {
	char f[50], r[20];
	int i, j=0, a, k=0;
	printf("\t\t\t******INPUT******\n");
	printf("Enter name: ");
	gets(f);
	r[0]=f[0];
	for(i=0; f[i]!='\0'; i++) {
		if(f[i]==' ') {
			j++;
			if(j==1)
				r[1]='.', r[2]=f[i+1];
			else if(j==2){
				r[3]='.';
				for(a=i+1; f[a]!='\0'; a++){
					r[4+k]=f[a];
					k++;
				}
			}
		}
	}
	r[4+k]='\0';
	printf("\t\t\t******OUTPUT******\n");
	printf("Result: %s", r);
	return 0;
}
