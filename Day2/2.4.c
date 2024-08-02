#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year to check leap year or not : ");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("%d is leap year",year);
	}
	else if(year%100==0)
	{
		printf("%d is leap year",year);
	}
	else if(year%400==0)
	{
		printf("%d is leap year",year);
	}
	else
	{
		printf("%d is not leap year",year);
	}
}
