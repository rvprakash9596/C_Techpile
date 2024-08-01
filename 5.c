#include<stdio.h>
int main()
{
	int days,years,weeks;
	printf("Enter number of days : ");
	scanf("%d",&days);
	years=days/365;
	weeks=(days%365)/7;
	days = days-((years*365)+(weeks*7));
	printf("Total years = %d",years);
	printf("\nTotal weeks = %d",weeks);
	printf("\nTotal days = %d",days);
	return 0;
}
