#include<stdio.h>
int main()
{
	char grade;
	printf("Enter the Grade : ");
	scanf("%c",&grade);
	if(grade=='A')
	{
		printf("90 above");
	}
	else if(grade=='B')
	{
		printf("\n75-90");
	}
	else if(grade=='C')
	{
		printf("\n61-75");
	}
	else if(grade=='D')
	{
		printf("\n46-60");
	}
	else if(grade=='E')
	{
		printf("\n36-45");
	}
	else
	{
		printf("Fail");
	}
}
