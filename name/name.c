#include<stdio.h>
int main()
{
	char Name[100];

	printf("Enter your Name: ");
	fgets(Name,100,stdin);
	printf("Your Name: ");
	fputs(Name,stdout);
}
