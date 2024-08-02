#include<stdio.h>
int main()
{
	int s1,s2,s3;
	printf("Enter 1st subject marks : ");
	scanf("%d",&s1);
	printf("Enter 2nd subject marks : ");
	scanf("%d",&s2);
	printf("Enter 3rd subject marks : ");
	scanf("%d",&s3);
	
	float total=s1+s2+s3;
	printf("Total Marks = %.2f",total);
	
	float percent=(s1+s2+s3)/3;
	printf("\nYour Total Percent is %.2f%%\n",percent);
	
	if(percent<33)
	{
		printf("You Have 3rd Division Passed.");
	}
	else if(percent>33 && percent<65)
	{
		printf("You Have 2nd Division Passed.");
	}
	else
	{
		printf("You have 1st Division Passed.");
	}
}
