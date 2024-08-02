#include<stdio.h>
int main()
{
	char gender;
	printf("Please enter your Gender (M/m or F/f or T/t) : ");
	scanf("%c",&gender);
	switch(gender)
	{
		case 'M':
		case 'm':
			printf("You are Male");
			break;
		case 'F':
		case 'f':
			printf("You are Female");
			break;
		case 'T':
		case 't':
			printf("You are Transgender");
			break;
		default:
			printf("Please enter valid Gender...");
	}
}
